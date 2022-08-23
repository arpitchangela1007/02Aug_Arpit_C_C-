#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any two digit");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		
			printf("A is Max");
	
		else
		
			printf("1C is Max");
		
	}
	else
	{
		if(b>c)
		
			printf("B is Max");
		
		else
		
			printf("2C is Max");
		
		
	}
}
