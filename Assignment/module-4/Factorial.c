#include<stdio.h>
long int fecto(long int a)
{
	if(a <= 1)
		return 1;
	return a*fecto(a-1);
}
int main() 
{
	int a;
	printf("Enter fectorial number:");
	scanf("%d",&a);
	printf("%ld",fecto(a));	
}
