/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int num1, num2;
	int result1, result2;
	printf("두 정수를 입력: ");
	scanf("%d %d", &num1, &num2);
	result1 = num1 / num2;
	result2 = num1 % num2;
	printf("몫은 %d \n", result1);
	printf("나머지는 %d \n", result2);
}