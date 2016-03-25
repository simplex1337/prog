#include "strings.h"
 
int stok(char *str, char delim, char *ptr[], int size) 
{
    
    char *suf = str;
    ptr[0] = str;
    int i, j = 1;
    while((i = schr(suf, delim, size)) >= 0) {
        suf[i] = '\0';
        suf = suf + i + 1;
        ptr[j] = suf;
        j++;
    }
    return j;
}

int suntok(char str[], char delim, char *ptr[], int cnt) 
{
    int i;
    for(i = 1; i < cnt; i++)
        *(ptr[i] - 1) = delim;
}

int schr(char *suf, char delim, int size)      
{
    int i, idx = -1;
    for (i = 0; (i < size) && (suf[i] != delim); i++);
    if(suf[i] == delim)
        idx = i;
    return idx;
}

int slen(char str[])                
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}

char scopy(char s1[], int i, int size)               
{                                                      
    char s2[size];
    for(i; i <= size; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
    return *s2;
}

int sequal(char s1[], char s2[])
{
    int i, flg = 1;
    for(i=0; flg && (s1[i]!='\0' || s2[i]!='\0') ;i++)
        if( s1[i]!=s2[i] ) flg = 0;
    return flg;
}