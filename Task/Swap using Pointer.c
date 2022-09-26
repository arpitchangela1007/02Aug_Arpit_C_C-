#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	
	printf("Enter Number of A: ");
	scanf("%d",&*ptr1);
	printf("Enter Number of B: ");
	scanf("%d",&*ptr2);

	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("Value of A is: %d\n",*ptr1);
	printf("Value of B is: %d",*ptr2);
	
}
