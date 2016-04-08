#include "strings.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
			return str[i] + ('a' - 'A'); 
		return str[i];
	}
}

int sspn(char str[], int size)
{
	int i, l, flg = 1;
        for(l = 0; l < 4; i =+ 2, l++) {
            int x;
            printf("sosi\n");
            for(i = 0; i != schr(str, ':', size) && str[i] != '\0'; i++) {
                char *t = &str[i];
                x = x + atoi(t) * pow(10, i);
            }
            if( x < 0 || x > 255) {
                printf("powel nah\n");
                return 0;
            }
	}
}
