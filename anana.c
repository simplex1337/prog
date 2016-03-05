#include <stdio.h>

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)


int main()
{
	char delim;
	char paths[MAXSIZE];
	
	printf("input delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
	i = stok(str, del, ptr);
	
	if( delim == ' '){
		printf("delim is <space>\n");
	}else
		printf("delim is %c\n",delim);		
	printf("path string is: %s\n",paths);

}

int schr(char *str, char delim)
{
	int i, idx = -1;
	for(i = 0; (str[i] != '\0') && (str[i] != delim); i++);
		if(str[i] == delim)
			idx = i;
return idx;
}
int stok(char str[], char delim, char *ptr[])
{
	char *suf = str;
	ptr[0] = str;
	int i,j = 1;
	if (suf[i]== delim) {
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++;
	}
	return j;
}
void suntok(char *str, char delim, char *ptr[], int cnt)
{
	int i;
	for(i = 1; i < cnt; i++) {
		*(ptr[i] - 1) = delim;
	}
}
int sequal(char *s, char *s2)
{
	
	int i, flg = 1;
	
	for(i = 0; out && (s[i] != '\0' && s2[i] != '\0'); i++) {
		if (s[i] != s2[i]){
			out = 0;
			return flg;
		}
	}
	return out;
}
int scspn(char str[], char nsym[])
{
	int i;
	for(i = 0; str[i] != '\0'; i++)
		if(schr(sym, str[i]) >= 0) {
			break;
		}
	}
	return i;
}
