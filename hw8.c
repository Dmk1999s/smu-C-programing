#include <stdio.h>
#include <math.h>

void carculate(int* param, double s)
{
	int i;
	double  a, c;
	double b;
	a = 0;
	c = 0;
	for (i = 0; i < 5; i++)
	{
		a += pow(param[i] - s, 2)/5;
	}
	b = sqrt(a);
	printf("Standard Deviation = %f", b);
}

int main(void)
{
	int x1, x2, x3, x4, x5;
	int u;
	int i;
	printf("Enter 5 real number: ");
	scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
	int arr[5] = { x1,x2,x3,x4,x5 };
	u = (x1 + x2 + x3 + x4 + x5) / 5;
	carculate(arr, u);
}