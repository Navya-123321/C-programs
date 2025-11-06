/*Write a c program to evaluate the following expresson
a/b*c-b+a*d/3*/

#include<stdio.h>
int main()
{

	float a,b,c,d,result,j,i;
    printf("Enter values of a,b,c,d");
	scanf("%f%f%f%f", &a,&b,&c,&d);
	result =a/b*c-b+a*d/3;
	printf("The result is %f",result);
	
    printf("\nEnter the value of i");
	scanf("\n%f",&i);
	j=(i++)+(++i);
	printf("The j value is %f",j);
}
	
