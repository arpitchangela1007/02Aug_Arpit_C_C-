#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter First Number");
	scanf("%d",&a);
	printf("Enter Second Number");
	scanf("%d",&b);
	if(a==b)
	{
		printf("Number is Equal \n");
	}
	else
	{
		printf("Number is not Equal\n");
	}
	if(a>b)
	{
		printf("A is Less then to B \n");
    }
	else
	{
		printf("A is Greter then to B \n");
	}
}
