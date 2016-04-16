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
	int t;
	printf("input paths: ");
	fgets(str, MAXSIZE, stdin);
	int size = slen(str);
	/*for(int i = 0; (i < size); i++)
		if(str[i] == '.')
			t++;
	if (t == 3) {
		for(int i = 0; (i < size); i++) 
			if(str[i] >= '0' && str[i] <= '9') 
				t = 3;
			else t = 4;
	}*/
	//toLowCase(str, size);
	check (str, ptr, size, t);
	process (str, size);
	//int size2 = slen(str);
	//printf("%s\n", str);
	//int k = stok(str, '.', ptr, size);
	//int j = stok(str, ':', ptr, size);
	//isIp(str, ptr, size, t);
	//suntok(str, '.', ptr, k);
	//printf("Is SCP: yes\n");
	printf("updated path is: %s\n", str);
	//printf("size = %d\n", size);
	return 0;
}

