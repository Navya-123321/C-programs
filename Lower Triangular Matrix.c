/*write a c program to check whether the given matrix is lower triangular matrix or not*/
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,ltm;
	printf("\nEnter the elements of the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j && mat[i][j]!=0 || i>=j && mat[i][j]==0)
			{
				ltm=0;
				break;
			}
		}
	}
	if(ltm==1)
	    printf("The given matrix is a lower triangular matrix");
	else
	    printf("The given matrix is not a triangular matrix");
}
