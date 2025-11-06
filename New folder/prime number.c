/*Write a C program to check whether the given number is prime or not*/

#include<stdio.h>
int main()
{
	int i, num, count=0;
	printf("Enter any integer number");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	printf("\nThe given number %d is prime", num);
	else
	printf("\nThe given number %d is not prime", num);
}
