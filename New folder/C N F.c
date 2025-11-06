 #include<stdio.h>
int main()
{
	char ch;
	int num; 
	float flt;
	printf("Enter any character");
	scanf("%c", &ch);
	
	printf("Enter any integer number");
	scanf("%d",&num);
	
	printf("Enter any Real number");
	scanf("%f",&flt);
	
	printf("Charcter is:%c\nInteger number is:%d\nreal number is:%f",ch,num,flt);		 
}
