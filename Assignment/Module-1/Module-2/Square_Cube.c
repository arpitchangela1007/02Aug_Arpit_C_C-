#include <stdio.h>
int main(){
	
    int num, square, cube;
    printf("Enter an number: ");
    scanf("%d", &num);
    square = num * num;
    cube = num * num * num;
    printf("Square of is: %d \n", square);
    printf("Cube of is: %d",cube);
}
