/*write a menu driven c-program to perform all string handling functions*/
#include<stdio.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int choice,val=1;
	printf("\n1. length of the string");
	printf("\n2. copy of the string");
	printf("\n3. concantination of two strings");
	printf("\n4. comparision of the string");
	printf("\n5. reverse of the string");
	printf("\n6. converting into lowercase");
	printf("\n7. converting into uppercase");
	printf("\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	   case 1:
	   {
	   	printf("Enter any string");
	   	scanf("%[^\n]",s1);
	   	printf("Length of the given string is %d",strlen(s1));
	   	break;
	   }
	   case 2:
	   {
	   	printf("\nEnter any source string");
	   	scanf("%[^\n]",s1);
	   	strcpy(s2,s1);
	   	printf("After copy the destination string is %s",s2);
	   	break;
	   }
	   case 3:
	   {
	   	printf("Enter any string1");
	   	scanf("%[^\n]",s1);
	   	printf("Enter any string2");
	   	scanf("%[^\n]",s2);
	   	strcat(s1,s2);
	   	printf("After concatination the string is %d",s1);
	   	break;
	   }	
	   case 4:
	   {
	   	printf("Enter any string1");
	   	scanf("%[^\n]",s1);
	   	printf("Enter any string2");
	   	scanf("%[^\n]",s2);
	   	strcat(s1,s2);
	   	val = strcmp(s1,s2);
	   	if(val==0)
	   	  printf("Strings are equal");
	   	else
	   	  printf("Strings are not equal");
	   	break;
	   }
	   case 5:
	   	{
	   	printf("Enter any string");
	   	scanf("%[^\n]",s1);
	   	printf("the reverse of the string is %d",strrev(s1));
	   	break;
		}
		default:
			printf("Please choose an option");
	}
	
}
