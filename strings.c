#include "strings.h"
 
int stok(char *str, char delim, char *ptr[]) 
{
    
    char *suf = str;
    ptr[0] = str;
    int i, j = 1;
    while((i = schr(suf, delim)) >= 0) {
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

int schr(char *suf, char delim)      
{
    //printf("schr started\n");
    int i, idx = -1;
    for (i = 0; (suf[i] != '\0') && (suf[i] != delim); i++);
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

char scopy(char s1[], int i)       //соль(tm): копирование одной строки в другую. возвращает скопированную строку до нуль-терминатора                
{                                   //на вход принимаем строку и начальный символ                         
    char s2[slen(s1)];              //на выход скопированная строка
    for(i; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
    return *s2;
}