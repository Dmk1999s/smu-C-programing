/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int n1, n2;
	int result1, result2, result3;
	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &n1, &n2);
	result1 = n1 & n2;
	result2 = n1 | n2;
	result3 = n1 ^ n2;
	printf("AND 연산의 결과 : %d \n", result1);
	printf("OR 연산의 결과 : %d \n", result2);
	printf("XOR 연산의 결과 : %d \n", result3);
}