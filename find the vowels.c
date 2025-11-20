/*Write a C program to find no of vowels, consonants, digits,spaces*/
#include<stdio.h>
int main()
{
	char sent[10];
	int v=0, c=0, d=0, s=0, i;
	printf("\n Enter the sentence");
	scanf("%[^\n]",sent);
	
	for(i=0; sent[i]!='\0';i++)
	{
		if(sent[i]=='a' ||  sent[i]=='e' ||  sent[i]=='i' ||  sent[i]=='o' || 
		 sent[i]=='u' ||  sent[i]=='A' ||  sent[i]=='E' ||  sent[i]=='I' ||  
		 sent[i]=='O' ||  sent[i]=='U')
		 v++;
		else if(sent[i]>='a'&&sent[i]<='z')
		   c++;
		else if(sent[i]>='0' && sent[i]<='9') 
		   d++;
		else if(sent[i]==' ')  
		s++;
	}
	printf("Vowels %d, consonents %d, digits %d, spaces %d",v,c,d,s);
}
