#include <stdio.h>

int slen (char s[]);
int sequal (char s1[], char s2[]);
void scpy (char *of, char *to);
void scat (char *s1, char *s2);
int schr (char *str,char ch);
int scmp (char s1[], char s2[]);
int sspn (char str[], char sym[]);
int stok(char str[], char delim, char *ptr[]);
void suntok (char str[], char delim, char *ptr[], int cnt);
int scspn (char ban[], char paths[]);