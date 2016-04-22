#include "strings.h"
#include <stdlib.h>
#include <stdio.h>

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)

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
			if(x < 0 || x > 255) {
				printf("IP is correct: no\n");	
				exit(EXIT_FAILURE);
			}
		}
		return printf("IP is correct: yes\n");
	}
	else {
		printf("IP is correct: no\n");	
		exit(EXIT_FAILURE);
	}
}


void check(char *str, char *ptr[], int size)
{
	int t, i, s, d;
	if (scspn(str, size) > 0) {
		printf("Is SCP: no\n");
		return;
	}
	for(i = 0; (str[i] != '\0'); i++)
		if(str[i] == ':' && str[i+1] == '/')
			s++;
	for(i = 0; (str[i] != '\0'); i++)
		if(str[i] == ':')
			d++;
	if (s == 1 && d ==1)
		printf("Is SCP: yes\n");
	else { 
		printf("Is SCP: no\n");
		return;
	}
	int j = stok(str, ':', ptr, size);
	for(i = 0; (str[i] != '\0'); i++)
		if(str[i] == '.')
			t++;
	if (t == 3) {
		for(i = 0; i < str[i] != '\0'; i++) 
			if((str[i] >= '0' && str[i] <= '9') || (str[i] == '.')) 
				t = 3;
			else {
				t = 4;
				break;
			}
	}
	char *ptr2[5];
	int k = stok(str, '.', ptr2, size);
	isIp(ptr2, size, t);
	suntok(str, '.', ptr2, k);
	suntok(str, ':', ptr, j);
	process(str, size);
	output(str);
}

void process(char *str, int size)
{
	toLowCase(str, size);
}

void input(char *str)
{
	printf("input paths: ");
	fgets(str, MAXSIZE, stdin);
}

void output(char *str)
{
	printf("updated path is: %s\n", str);
}

int scspn(char str[], int size)
{
	char nsym[] = {'\\', '+', '*', '?', '"', '<', '>', '|'};
	int j;
	for(j = 0; nsym[j] != '\0'; j++)
		if (schr(str, nsym[j], size) >= 0)
			return 1;
	return 0;
}
