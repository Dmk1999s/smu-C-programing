/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int num;
	int result;
	printf("하나의 정수를 입력하세용: ");
	scanf("%d",& num);
	result = num * num;
	printf("결과값 = %d", result);
}
