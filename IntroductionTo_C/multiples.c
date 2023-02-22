/*Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. */

#include <stdio.h>

int main (void){
     
     int multiple;
     int divisor;

     printf("Enter the multiple and the divisor");
     scanf("%d %d", &multiple, &divisor);

     if(multiple % divisor == 0){
        printf("%d is a multiple of %d", multiple, divisor);
     }

     if(multiple % divisor != 0){
        printf("%d is not a multiple of %d", multiple, divisor);
     }




}