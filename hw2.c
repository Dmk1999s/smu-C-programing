/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   float num1;
   float result;
   printf("please enter kliometers: ");
   scanf("%f", &num1);
   result = num1 * 1 / 1.609;
   printf("%.1f km is equal to %.1f miles \n", num1, result);
}