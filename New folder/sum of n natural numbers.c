/*Write a C program to print n natural numbers*/
#include<stdio.h>
int main()
{
	int num, sum = 0, i;
	printf ("Enter any positive number");
	scanf ("%d", &num);
	for (i=1; i<=num; i++)
	{
		sum = sum+i;  
	}
	printf ("The sum is %d ",sum);
}
