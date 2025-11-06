/*Write a C program to perform bitwise operation*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two integers");
	scanf("%d%d", &a,&b);
	printf("\n bitwise operation of %d&%d is %d", a,b,a&b);
	printf("\n bitwise operation of %d|%d is %d", a,b,a|b);
	printf("\n bitwise operation of %d^%d is %d", a,b,a^b);
	printf("\n bitwise operation of %d<<%d is %d", a,b,a<<b);
	printf("\n bitwise operation of %d>>%d is %d", a,b,a>>b);
}
