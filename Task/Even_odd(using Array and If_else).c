#include<stdio.h>
void main()
{
    int a[5],b[5];
    int i;
    for(i=0;i<=5;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {   
            printf("Number is Even \n");

        }
        else
        {
            printf("Nmuber is Odd \n");
        }       
    }
    printf("%d \n",a[i]);
    
}
