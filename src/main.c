#include "strings.h"
#include "add.h"

int input (char paths[])
{
	char delim;
	printf (" input delim: ");
	scanf (" %c%*c",&delim );
	printf (" input paths: ");
	fgets (paths, 255, stdin);
	paths[slen(paths) - 1 ] = '\0';
	return delim;
}

void output (char paths[])
{
	printf ("newpaths ");
	printf (" %s\n", paths );
}

int check (char delim, char paths[])
{
	int flag = 0, flg = 0;
	char ban[8];ban[0] = '\\'; ban[1] = ':'; ban[2] = '*'; ban[3] = '?'; ban[4] = '"'; ban[5] = '<'; ban[6] = '>'; ban [7] = '|';
	if (delim == ' '){
		printf ("delim is space\n");
		flag = 1;
	}
	if ((paths[0] == ' ') || (paths[0] == '\0')){
		printf ("paths is space\n");
		flag = 1;
	}
	flg = scspn (ban, paths);
	if (flg != 0){
		printf ("Used ban simbol\n");
	}
	flag = flg + flag;
	return flag;
}

void toLowCase(char str[256])
{
	int i;
	for(i=0;str[i]!='\0';i++){
	if( str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + ('a'-'A');
    }
}
void process (char path[], char delim, char newpaths[])
{
	int j, i, flag, d, l, q, x, flg;
	char *ptr1[255], *ptr2[255], delim2 = '/', adaptation[255], sample[11] = "cygdrive";
	j = stok (path, delim, ptr1);
	for (i = 0; i < j; i++){
		scpy(ptr1[i], adaptation);
		x = slen(adaptation);
		if (adaptation[x-1] != '/'){
			flg = 1;
		}
		l = stok (adaptation , delim2, ptr2);
		flag = sequal(ptr2[1], sample);
		if (flag == 0){
			d = slen(newpaths);
			//toLowCase(*ptr2[2]);
			newpaths[d] = *ptr2[2];
			newpaths[d+1] = '\0';
			addpoint(newpaths);
			addslash(newpaths);
			for (q = 3; q < l; q++){
				d = slen(newpaths);
				scat (newpaths, ptr2[q]);
				addslash(newpaths);
			}
			d=slen(newpaths);
			if (flg == 1)
				newpaths[d-1]='\0';
			adddelim (newpaths, delim);
		} else {
			scat (newpaths, ptr1[i]);
			adddelim (newpaths, delim);
		}
	}
	d=slen(newpaths);
	newpaths[d-1]='\0';
}

int main ()
{
	int flag = 0;
	char paths[255]="/cygdrive/c/Windows/system32+/cygdrive/e/Distrib/msoffice.exe+/home/alex/prog/lab4.c",newpaths[255], delim='+';
	//delim = input (paths);
	flag = check (delim, paths);
	if (flag == 0){
		process (paths, delim, newpaths);
		output (newpaths);
	}
	return 0;
} 