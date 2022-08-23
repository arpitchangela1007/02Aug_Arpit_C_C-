#include<stdio.h>
void main()
{
	int a;
	printf("Enter any two digit");
	scanf("%d", &a);
	
	if(a<=18)
	{
		if(a<=18 & a<=50)
		
			printf("Child");
	
		else
		
			printf("Adult");
		
	}
	else
	{
		if(a>=51)
		
			print("Retaired");
		
		else
		
			printf("Adult");
		
	}
	
	
}
