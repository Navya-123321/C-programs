/*Write a C program to read 5 subject marks and display the average*/

#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,Average;
	printf("Enter the 5 subject marks");
	scanf("%f%f%f%f%f", &m1,&m2,&m3,&m4,&m5);
	Average =(m1+m2+m3+m4+m5)/5;
	printf("The average marks are %f",Average);
}
