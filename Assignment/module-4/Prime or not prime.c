#include<stdio.h>
void main()
{
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a%2==0 || a%3==0 || a%4==0 || a%5==0 || a%6==0 || a%7==0 || a%8==0 || a%9==0)
	{
		printf("number is not prime");
	}
	else
	{
		printf("number is prime");
	}
}
