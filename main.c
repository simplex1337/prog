//вариант 6, вторая сложность
#include <stdio.h>
#icnlude "strings.h"

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)


int main()				
{
    char paths[MAXSIZE];	
	char delim;
    char newpaths[MAXSIZE];
    printf("delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
    int j = stok(paths, delim);
    printf("j=%d\n", j);
    return 0;
}