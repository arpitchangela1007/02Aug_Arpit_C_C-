#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Any Two Value");
	scanf("%d %d",&a,&b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("Value of A is %d Value of B is %d",a,b);
}
