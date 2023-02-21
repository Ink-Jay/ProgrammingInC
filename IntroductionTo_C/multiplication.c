//Program to multiply three integers
#include<stdio.h>

int main(void){

    int x;
    int y;
    int z;

    puts("Enter three integers to find the product");
    scanf("%d %d %d", &x,&y,&z);

    int result = x * y * z;   //multipy and assign the value to result

    printf("The product is %d", result);
}