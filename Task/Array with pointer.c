#include<stdio.h>
int main()
{
	int a[5],i;
	int *ptr;
	ptr=&a[0];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number: ");
		scanf("%d",&*ptr++);
//		ptr[i]++;
	}
	ptr=&a[0];
	
	
	for(i=0;i<5;i++)
	{
		printf("\nFinal value is: %d",*ptr++);
	}
	printf("\n%d",sizeof(a));
}
