#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ctest.h>

int main()
{
    int a, b, c;
    printf("Input a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0) {
        fprintf(stderr,
            "Enter another \"a\" value\n");
        exit(EXIT_FAILURE);
    }
    int d = b * b - 4 * a * c;
    if (d < 0) {
        fprintf(stderr,
            "Diskriment is under null. Please, enter another values\n");
        exit(EXIT_FAILURE);
    }
    printf("x1 is: %.3f\n", (b - sqrtf(d)) / (2 * a));
    printf("x2 is: %.3f\n", (b + sqrtf(d)) / (2 * a));
    return 0;
}
