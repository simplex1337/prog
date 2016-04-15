#include "add.h"
#include "strings.h"

void addslash(char paths[])
{
    paths[slen(paths)] = '\\';
    paths[slen(paths) + 1] = '\0';
}

void adddelim(char paths[], char delim)
{
    paths[slen(paths)] = delim;
    paths[slen(paths) + 1] = '\0';
}

void addpoint(char paths[])
{
    paths[slen(paths)] = ':';
    paths[slen(paths) + 1] = '\0';
}
