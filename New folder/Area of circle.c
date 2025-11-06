/*Write a C program to find the area of circle*/

#include<stdio.h>
int main()
{
	float radius, area;
	printf("Enter the the value of Radius");
	scanf("%f",&radius);
	
	area = 3.14*radius*radius;
	printf("The Area of Circle is%f", area);
	
}
