#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int result;
	printf("하나의 정수를 입력하세용: ");
	scanf("%d", &num);
	result = num * num;
	printf("결과값 = %d", result);
}