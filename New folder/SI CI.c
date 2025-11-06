/*write a C program to find simple and compound interest*/

#include<stdio.h>
#include<math.h>
int main()
{
	int Pr,rate,time,years;
	float SI, CI;
	
	printf("Enter principle interst");
	scanf("%d",&Pr);
	
	printf("\nEnter rate of interst");
	scanf("%d",&rate);
	
	printf("\nEnter time");
	scanf("%d",&time);
	
	printf("\nEnter no.of years");
	scanf("%d",&years);
	
	SI=(Pr*rate*time)/100.0;
	CI=Pr*pow((1+rate/100.0),years)-Pr;
	
	printf("simple interst is %f",SI);
	printf("\ncompound interst is %f",CI);
}
