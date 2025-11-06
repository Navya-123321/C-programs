/*Write a C program to print the roots of quadratic equation*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2,realp,imgp;
	printf("Enter the value of a,b,and c");
	scanf("%d%d%d", &a,&b,&c);
	d = b*b-4*a*c;
	if(d>0)
	{
		printf("\nRoots are real");
		r1 = (-b + sqrt(d))/2*a;
		r2 = (-b - sqrt(d))/2*a;
		printf("r1=%f and r2=%f",r1,r2);
	}
	else
	if(d<0)
	{
	printf("\nRoots are imaginary ");
	realp = -b/2*a;
	imgp = sqrt(d)/2*a;
	printf("\nr1=%f+%fi and r2=%f-%fi", realp,imgp,realp,imgp);
    }   
    else
    {
    	printf("Roots are equal.");
	}
}
