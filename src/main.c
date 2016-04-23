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
	char *ptr[228];
	input(str);
	int size = slen(str);
	check(str, ptr, size);
	return 0;
}

