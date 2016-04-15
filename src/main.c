//вариант 6, вторая сложность
#include "strings.h"
#include "add.h"

void input(char paths[], char delim)
{
    printf("delim: ");
    scanf("%c%*c", &delim);
    printf("input paths: ");
    fgets(paths, 2610, stdin);
}

void output(char paths[])
{
    printf("newpaths ");
    printf(" %s", paths);
}

int check(char delim, char paths[])
{
    char ban[] = {'\\', ':', '*', '?', '"', '<', '>', '|'};
    if (delim == ' ') {
        printf("delim is space\n");
        return 1;
    }
    if ((paths[0] == ' ') || (paths[0] == '\0')) {
        printf("paths is space\n");
        return 1;
    }
    if (scspn(ban, paths) != 0) {
        printf("Used ban simbol\n");
        return 1;
    }
}


void process(char path[], char delim, char newpaths[])
{
    int j, i, d, l, q, x, flg;
    char *ptr1[10], *ptr2[255], adaptation[255];
    j = stok(path, delim, ptr1);
    for (i = 0; i < j; i++) {
        scpy(ptr1[i], adaptation);
        x = slen(adaptation);
        if (adaptation[x - 1] != '/')
            flg = 1;
        l = stok(adaptation, '/', ptr2);
        if (sequal(ptr2[1], "cygdrive") == 0) {
            d = slen(newpaths);
            newpaths[d] = *ptr2[2];
            newpaths[d + 1] = '\0';
            newpaths[d] = newpaths[d] - 32;
            addpoint(newpaths);
            addslash(newpaths);
            for (q = 3; q < l; q++) {
                d = slen(newpaths);
                scat(newpaths, ptr2[q]);
                addslash(newpaths);
            }
            d = slen(newpaths);
            if (flg == 1)
                newpaths[d - 1] = '\0';
            adddelim(newpaths, delim);
        } else {
	    scat(newpaths, ptr1[i]);
	    adddelim(newpaths, delim);
        }
    }
    d = slen(newpaths);
    newpaths[d - 1] = '\0';
}

int main()
{
    char paths[2610] = "", newpaths[2610] = "", delim;
    printf("delim: ");
    scanf("%c%*c", &delim);
    printf("input paths: ");
    fgets(paths, 2610, stdin);
    if (check(delim, paths) == 0) {
        process(paths, delim, newpaths);
        output(newpaths);
    }
    return 0;
}
