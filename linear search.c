/*Write a C prgram to check whether the given element is present in the list 
or not using linear search*/
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0,n;
	printf("\nEnter the size of an array");
	scanf("%d",&n);
	
	printf("\nEnter the elements");
	for(i=0;i<n;i++);
	scanf("%d",&a[i]);
	
	printf("\nEnter the target element");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	  printf("\nElement is found");
	else
	  printf("\nElement is not found"); 
}

