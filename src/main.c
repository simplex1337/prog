#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)

int main()
{
	char delim;
	char str[MAXSIZE];
	char *ptr[10];
	printf("input paths: ");
	fgets(str, MAXSIZE, stdin);
	int size = slen(str);
	char c = toLowCase(str, size);
	int size2 = slen(str);
	int  k = stok(str, '.', ptr, size);
	sspn(str, size2);
	
	suntok(str, '.', ptr, k);
	printf("path string is: %s\n",str);
	//printf("size = %d\n",size);
	return 0;
	
}

