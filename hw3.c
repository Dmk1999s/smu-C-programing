#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 1; a < 6; a++)
	{
		for (b = a; b < 5; b++)
		{
			printf(" ");
		}
		for (c = a; c <= 3 * a - 2;c++)
		printf("*");
		printf("\n");
	}
}
