#include "strings.h"
#include <stdlib.h>
#include <stdio.h>

int stok(char *str, char delim, char *ptr[], int size)
{
	char *suf = str;
	ptr[0] = str;
	int i, j = 1;
	while( ( i = schr(suf, delim, size) ) >= 0 ) {
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++;
	}
	return j;
}

int schr(char *str, char delim, int size)
{
	int i, idx = -1;
	for(i = 0; (i < size) && (str[i] != delim); i++);
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
int slen(char *str)                
{
	int i;
	for(i = 0; str[i] != '\0'; i++);
	return i;
}

int sequal(char s1[], char s2[])
{
    int i, flg = 1;
    for(i=0; flg && (s1[i]!='\0' || s2[i]!='\0') ;i++)
        if( s1[i]!=s2[i] ) flg = 0;
    return flg;
}

int isDigit(char *str, int size)
{
	for(int i = 0; i < size; i++) 
		if( atoi(str) < 0 || atoi(str) > 255)
			printf("powel nah\n");
}

char toLowCase(char *str, int size) 
{ 
	for (int i = 0; i < size; i++) {
		if( str[i] >= 'A' && str[i] <= 'Z') 
			str[i] = str[i] + ('a' - 'A');
	}
}

int isIp(char *ptr[], int size, int t)
{
	int l;
	if (t == 3) {
		for(l = 0; l <= 3; l++) {
			int x;
			x = atoi(ptr[l]);
			if(x < 0 || x > 255)
				return printf("IP is correct: no\n");	
		}
	return printf("IP is correct: yes\n");
	}
	else printf("IP is correct: no\n");	
}

void check(char *str, char *ptr[], int size, int t)
{
	int j = stok(str, ':', ptr, size);
	for(int i = 0; (i < size); i++)
		if(str[i] == '.')
			t++;
	if (t == 3) {
		for(int i = 0; i < slen(str); i++) 
			if(str[i] >= '0' && str[i] <= '9') 
				t = 3;
			else t = 4;
	}
	char *ptr2[5];
	int k = stok(str, '.', ptr2, size);
	isIp(ptr2, size, t);
	suntok(str, '.', ptr2, k);
	suntok(str, ':', ptr, j);
}

void process(char *str, int size)
{
	toLowCase(str, size);
}
