#include "strings.h"

int stok(char str[], char delim)
{
    char *ptr[];
    char *suf = str;
    ptr[0] = str;
    int i, j = 1;
    while((i = schr(&suf, delim)) >= 0){
        suf[i] = '\0';
        suf = suf + i + 1;
        ptr[j] = suf;
        j++
    }
    return j;
}

int schr(char suf, char delim)
{
    int i;
    for (i = 0; suf != delim; i++);
    return i;
}