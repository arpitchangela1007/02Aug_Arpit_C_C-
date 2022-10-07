#include<stdio.h>
int fibo(int x)
{
   int a=0, b=1, c;
   while (a<=x)
   {
     printf("%d ", a);
     c=a+b;
     a=b;
     b=c;
   }
}

int main()
{
   int x;

   printf("Enter range: ");
   scanf("%d", &x);

   printf("The fibonacci series is: \n");

   fibo(x);
}

