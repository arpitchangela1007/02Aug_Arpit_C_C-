#include<stdio.h>
int main()
{
	FILE *ptr;
	char a[10];
	
	ptr=fopen("G:/C Project/Demo.txt","r");
	fscanf(ptr,"%s",&a);
	printf("%s",a);
	fclose(ptr);
}
