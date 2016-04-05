//вариант 6, вторая сложность
#include "strings.h"

int process(char *str, int size);

int process(char *str, int size)
{
    char *ptr[30];
    int j = stok(str, '/', ptr, size);
    int i, j1 = 1; 
    for (i = 0; i < size; i++)
        printf("%c", str[i]);
    i = 1;
    int k = 1, l;
    while (i < size) {
        for(i; str[i] != '\0'; i++);
        char s2[i-k+1];
        for(k, l = 0; k <= i; k++, l++)
            s2[l] = str[k];
        if (sequal(s2, "cygdrive") == 1) {
            printf("cyg founded\n");
            *ptr[j1] =- 9;
            str[i] = str[i+1];
            str[i + 1] = ':'; 
        }
        i++;
        j1++;
    }
    for (i = 0; i < size; i++)
        printf("%c", str[i]);
    suntok(str, '/', ptr, j);
    for (i = 0; i < size; i++)
        printf("%c", str[i]);
}

int main()				
{
    int MAXPATH = 261;
    int MAXCNT = 10;
    int MAXSIZE = (MAXPATH*MAXCNT);
    int i, k = 1;
    char *ptr[10];
    char paths[MAXSIZE];	
	char delim;
    char newpaths[MAXSIZE];
    printf("delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
    int size = slen(paths);
    int j = stok(paths, delim, ptr, size);
    process(paths, size);
    return 0;
}
