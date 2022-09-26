#include<stdio.h>
int main()
{
	int a[5],i;
	int *ptr;
	ptr=&a;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number: ");
		scanf("%d[%d]",&ptr[i]);
		ptr[i]++;
	}
	for(i=0;i<5;i++)
	{
		printf("\nFinal value is: %d",a[i]);
	}
	
}
