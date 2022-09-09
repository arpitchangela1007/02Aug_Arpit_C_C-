/*
Where, 
a=Amount, 
b=Time, 
c=Rate of Intrest
and for the compont intrest
a= Principle Amount
b= Rate
c= Time
*/
#include<stdio.h>
void main()
{
	float a,b,c,x,P,t,y,per,z;
	printf("Enter Amount ");
	scanf("%f", &a);
	printf("Enter Rate ");
	scanf("%f", &b);
	printf("Enter Year ");
	scanf("%f",&c);
	x=(a*b*c)/100;
	printf("Simple Intrest is %f",x);
	P=x/100;
	z=P*b;
	y=z/2;
	t=y+x;
	printf("\n Compound Intrest is %f,",t+a);
	
}
	
