#include "strings.h"

int slen (char s[])
{
	int i;
	for (i = 0; s[i]!='\0'; i++);
	return i;
}

int sequal (char s1[], char s2[])
{
	int i;
	for (i = 0; ((s1[i] != '\0') || (s2[i] != '\0')); i++)
		if (s1[i] != s2[i])
			return -1;
	return 0;
}

void scpy (char *of, char *to)
{
	int i;
	for (i = 0; *(of + i) != '\0'; i++)
		*(to + i) = *(of + i);
}

void scat (char *s1, char *s2)
{
	int len = slen(s1);
	char *suf = s1 + len;
	scpy (s2,suf);
}

int schr (char *str,char ch)
{
	int i, idx = -1;
	for(i = 0;(str[i] != '\0') && (str[i] != ch); i++);
	if(str[i] == ch)
		idx = i;
	return idx;
}

int scmp (char s1[], char s2[])
{
	int i;
	for (i = 0; ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')); i++);
	if (s1[i] < s2[i])
		return -1;
    if (s1[i] > s2[i])
        return 1;
}

int sspn (char str[], char sym[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		if (schr(sym, str[i]) < 0)
			break;
	return i;
}

int stok(char str[], char delim, char *ptr[])
{
	char *suf = str;
	ptr[0] = str;
	int i, j = 1;
	while((i = schr(suf, delim)) >= 0 ){
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++;
	}
	return j;
}

void suntok (char str[], char delim, char *ptr[], int cnt)
{
	int i;
	for (i = 1; i < cnt; i++)
		*(ptr[i] - 1) = delim;
}

int scspn (char ban[], char paths[])
{
	int i;
	for (i = 0; i != 8; i++)
		if (schr(paths , ban[i]) >= 0)
			return 1;
	return 0;
}
