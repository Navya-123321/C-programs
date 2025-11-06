
#include<stdio.h>
int ()
{
	int i, j, rows, value;
	printf(" Enter the number of rows");
	scanf("%d", &rows);
	for (i=1; i<=rows; j++)
	{
		for (j=1; j<=rows-i; j++)
		value = 1;
		for (j=1; j<=i,j++)
		{
			printf("   a", j);
			value = value * (i-j)/(j+1);
		}
		printf ("\n")
	}
}
