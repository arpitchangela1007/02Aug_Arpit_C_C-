#include<stdio.h>
void main()
{
	float a,b,c,sum,avr;
	printf("Enter Mark of 3 subjects: ");
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	avr=sum/3;
	printf("Your Average Percentage is: %f \n",avr);

	
	if(avr>60)
	{
		if(avr>=75 )
		
			printf("Distinction \n");
		
		else
	
			printf("First class \n");
		
   }
		
	else
		
		if(avr>=35)
		{
			if(avr>50 && avr<=60)
			
				printf(" Second class");
			
			else
			
				printf("Pass class");
			
     	}
		else
		{
			if(avr<35)
			
				printf("fail");
			
			else
			
				printf("Enter Valid PR");
			
		}
				
	}

