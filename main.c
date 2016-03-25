//вариант 6, вторая сложность
#include "strings.h"

/*int process(char str[]);

int process(char str[])
{
    char *ptr[10];
    
}
*/
int main()				
{
    int MAXPATH = 261;
    int MAXCNT = 10;
    int MAXSIZE = (MAXPATH*MAXCNT);
    int i, k;
    char *ptr[10];
    char paths[MAXSIZE];	
	char delim;
    char newpaths[MAXSIZE];
    printf("delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
    int size = slen(paths);
    int j = stok(paths, delim, ptr);
    for (i = 0, k = 1; i < size; i++, k++) {
        if (&paths[i] == ptr[k]) {
            printf(" ");
            k++;
        }
        else printf("%c", paths[i]);        
    }    
    return 0;
}
