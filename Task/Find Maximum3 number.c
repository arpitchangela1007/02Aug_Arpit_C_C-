#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter Number: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is maximum");
		}
		else
		{
			printf("C is maximum");
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
		{
			printf("B is maximum");
		}
		else
		{
		
			printf("D is maximum");
		}
		
		}
		
	}
	if(d>a)
	{
		printf("D is Maximum");
	}
	else
	{
		printf("A is maximum");
	}
}
