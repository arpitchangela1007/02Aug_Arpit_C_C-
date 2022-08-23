#include<stdio.h>
void main()
{
	int a;
	printf("Enter Number To Check Even or Odd ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf(" %d Number Is Even",a);
	}
	else
	{
		printf("%d Number Is Odd",a);
	}
}
