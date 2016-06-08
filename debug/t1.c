#include <stdio.h>
#include <stdlib.h>

void init(int **arr, int n)
{
    int* tmp = malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; ++i) {
        tmp[i] = i;
    }
    *arr =tmp;
}
int main()
{
    int *arr = NULL;
    int n = 10;
    init(&arr, n);
    int i;
    for (i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
} 
