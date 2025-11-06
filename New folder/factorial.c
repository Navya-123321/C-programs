/*Write a C program to print a Factorial of a given number*/
#include<stdio.h>
int main()
{
	int num, fact = 1, i;
	printf(" Enter any positive number");
	scanf("%d", &num);
	for (i = 1; i<=num; i++)
	{
		fact = fact * i;
	}
	printf (" The factorial is %d", fact );
}
