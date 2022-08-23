#include<stdio.h>
void main()
{
	int a;
	printf("Enter any two digit");
	scanf("%d", &a);
	
	if(a<=18)
	{
		if(a<=18 && a<=50)
		
			printf("Child");
	
		else
		
			printf("Adult");
		
	}
	else
	{
		if(a<=50 && a>=100)
		
			printf("Retaired");
		
		else
		
			printf("Adult");
		
	}
	
	if(a>100)
	{
		printf("Age not Found");
	}
	
	
}
