#include <stdio.h>

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)

void count();
int main()
{
	char delim;
	char paths[MAXSIZE];
	
	printf("input delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
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
	
	if( delim == ' '){
		printf("delim is <space>\n");
	}else
		printf("delim is %c\n",delim);		
	printf("path string is: %s\n",paths);

}


