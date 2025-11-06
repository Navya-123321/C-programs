/*Write a C program to print the sum of the digits of given number */

#include<stdio.h>
int main()
{
	int num, sum=0, rem;
	printf("Enter any integer number ");
	scanf("%d", &num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	} 
	printf("\nsum of the digits of the given number is %d",sum);
}
