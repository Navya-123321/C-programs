/*Write a C program to find the area of rectangle*/

#include<stdio.h>
int main()
{
	float length,breadth,Area;
	printf("Enter the value of length");
	scanf("%f",&length);
	
	printf("Enter the value of breadth");
	scanf("%f",&breadth);
	
	Area =length*breadth;
	printf("The Area of Rectangle is %f",Area);
}
