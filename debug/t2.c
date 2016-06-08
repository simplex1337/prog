#include <stdio.h>
#define SIZE (4)

typedef struct
{
	int num;
 	char str[SIZE];
} NumberRepr;

void format(NumberRepr* number)
{
	sprintf(number->str, "%3d", number->num);
	number->str[SIZE-1] = '\0';
	//printf("str: %s\n", number->str);
	//printf("num: %d\n", number->num);
}

int main()
{
	NumberRepr number = { .num = 1025 };
	format(&number);
	printf("str: %s\n", number.str);
	printf("num: %d\n", number.num);
	return 0;
} 
