/*Write a program that reads an integer and determines and prints whether
it’s odd or even. */

#include <stdio.h>

int main (void){

    int number;

    puts("Enter an integer");
    scanf("%d", &number);

    //even
    if(number % 2 == 0){
        printf("%d is even", number);
    }
    
    //oddd
    if(number % 2 != 0){
        printf("%d is odd", number);
    }

}