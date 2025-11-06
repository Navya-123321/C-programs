/*write a Cprogram to find area of triangle*/

#include<stdio.h>
int main()
{
	float base, height, Area ;
	printf("Enter the value of base");
	scanf("%f",&base);
	
	printf("Enter the value of height");
	scanf("%f",&height);
	
	Area =0.5*base*height;
	printf("area of Triangle is %f",Area);
}
