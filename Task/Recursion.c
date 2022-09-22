#include<stdio.h>
int a;
int num()
{	
	printf("\nEnter Number: ");
	scanf("%d",&a);
	a++;
	printf("\nAfter Increment: %d",a);
	num();
	
}
int main()
{
	num();
}

