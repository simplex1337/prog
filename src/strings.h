#ifndef string_h
#define string_h

int stok(char *str, char delim, char *ptr[]);
int schr(char *str, char delim);
void suntok(char *str, char delim, char *ptr[], int cnt);
int slen(char *str[]);
int sequal(char s1[], char s2[]);

#endif 
 
