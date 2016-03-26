#include <stdio.h>
#include "strings.h"

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)

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
	return 0;
	
}

