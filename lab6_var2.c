//вариант 6, вторая сложность
#include <stdio.h>

#define MAXPATH 261
#define MAXCNT 10
#define MAXSIZE (MAXPATH*MAXCNT)
/*объявляю переменные и прототипы*/
char delim;						//разделитель
char paths[MAXSIZE];			//непосредственно пути
char newpaths[MAXSIZE];
void input();                   //функция ввода путей\пути
void process();                 //обрабатываем массив

int main()				
{
	input();
    process();
    printf("new paths: %s\n",newpaths);
}

void input() 
{						
	printf("delim: ");
	scanf("%c%*c",&delim);
	printf("input paths: ");
	fgets(paths,MAXSIZE,stdin);
    printf("paths[0]: %c\n", paths[0]);
}

void process()          
{
    int i = 0, j = 0, m = 0;
    for (i = 0; paths[i] != "\0"; i++) {
        if ((paths[i] == delim) || (paths[i] == "\n")) {
            printf("path founded\n");
            char cygdrive[10];
            printf("variable \"cygdrive\" initialized\n");
            int k = 0;
            for (j = i - j; j <= i; j++) {
                cygdrive[k] = paths[j];
                k++;
                printf("variable \"cygdrive\": %s\n", cygdrive[j]);
                if (cygdrive == "/cygdrive/") {
                    printf("cygrive founded\n");
                    newpaths[j+1] = paths[m+1] - 32;
                    printf("cygrive drive is: %c\n", newpaths[j+1]);
                    for (m = j+1; j <= i; m++) { 
                        if (paths[m] == "/") { 
                            newpaths[m] = "\\";
                            m++;
                        }
                        newpaths[m] = paths[m];
                    j = m;
                    }
                newpaths[j] = paths[m];
                }
            }
        }
    }
}
