#include "add.h"
#include "strings.h"

void addslash (char paths[])
{
	int i;
	i = slen(paths);
	paths[i] = '\\';
	paths[i+1] = '\0';
}

void adddelim (char paths[], char delim)
{
	int i;
	i = slen (paths);
	paths[i] = delim;
	paths[i+1] = '\0';
}

void addpoint (char paths[])
{
	int i;
	i = slen(paths);
	paths[i] = ':';
	paths[i+1] = '\0';
}