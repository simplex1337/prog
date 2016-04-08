//вариант 6, вторая сложность
#include "strings.h"

int process(char *str, int size);

int process(char *str, int size)
{
    char *ptr[30];
    int j = stok(str, '/', ptr, size);
    int i; 
    for (i = 0; i < size; i++)
        printf("%c", str[i]);
    int k = 1, l, m;
    i = 1;
    for(m = 1; m <= j; m++) {
        for(i; str[i] != '\0'; i++);
        char s2[8];
        for(k, l = 0; k <= i; k++, l++)
            s2[l] = str[k];
        if (sequal(s2, "cygdrive") == 1) {
            printf("cyg founded\n");
            //*ptr[m + 1] = str[i];
            ptr[m] = ptr[1];
            str[i + 2] = str[i + 3];
            str[i + 3] = ':';
            for (i = 0; i < size; i++)
                printf("%c", str[i]); 
        }
        i++;
    }
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
