#include <stdio.h>

int main()
{
    int *x, *y; 
    int a=5, b=10;
    x=&a;
    y=&b;
    printf("%d",*x+*y);
}
