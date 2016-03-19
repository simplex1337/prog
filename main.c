#include <stdio.h>

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)

int stok(char *str, char delim, char *ptr[]);
int schr(char *str, char delim);
void suntok(char *str, char delim, char *ptr[], int cnt);

int main()
{
	
	char delim;
	char str[MAXSIZE];
	char *ptr[10];
	printf("input delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(str, MAXSIZE, stdin);
	stok(str, delim, ptr);
	int j = stok(str, delim, ptr);
	suntok(str, delim, ptr, j);	
	printf("path string is: %s\n",str);
	
}

int stok(char str[], char delim, char *ptr[])
{
	char *suf = str;
	ptr[0] = str;
	int i,j = 1;
	while( ( i = schr(suf, delim) ) >= 0 ) {
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++;
	}
	return j;
}

int schr(char *str, char delim)
{
	int i, idx = -1;
	for(i = 0; (str[i] != '\0') && (str[i] != delim); i++);
		if(str[i] == delim)
			idx = i;
	return idx;
}

void suntok(char *str, char delim, char *ptr[], int cnt)
{
	int i;
	for(i = 1; i < cnt; i++) {
		*(ptr[i] - 1) = delim;
	}
}
