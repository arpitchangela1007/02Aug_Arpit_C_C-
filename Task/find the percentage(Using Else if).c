#include<stdio.h>
void main()
{
	float a,b,c,sum,avr;
	printf("Enter Mark of 3 subjects: ");
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	avr=sum/3;
	printf("Your Average Percentage is: %f \n",avr);
	
	if(a<35 || b<35 || c<35)
	{
		printf("Fail");
	}
	else if(avr>=75)
	{
		printf("Distinction");
	}
	else if(avr>60 && avr<=75)
	{
		printf("First class");
	}
	else if(avr>35 && avr<=50)
	{
		printf("pass class");
	}
	else if(avr<=35)
	{
		printf("Fail");
	}
	
	
}
