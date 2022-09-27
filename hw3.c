/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 5; a++)
	{
		for (b = a; b <= 5 - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}