#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int a;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (a = 2; num > a; )
	{
		if (num % a == 0)
		{
			printf("It is not a prime number. \n");
			break;
		}
		if (num % a != 0)
		{
			a++;
			if (num == a + 1)
				printf("It is a prime number. \n");
		}
	}
	if (num == 1)
		printf("it is a prime number. \n");
}