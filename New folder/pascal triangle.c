/*Write a c program to print Pascal Triangle */
#include<stdio.h>
int main()
{
	int i, j, rows, value;
	printf(" Enter  the no of rows");
	scanf("%d", &rows);
	for (i = 0; i<rows; i++)
	{
		for (j=0; j<rows-i; j++)
		printf("  ");
		value = 1;
		for (j=0; j<=i; j++)
		{
			printf("%4d",value);
			value = value * (i-j)/(j+1);
		}
		printf("\n");
	}
}
