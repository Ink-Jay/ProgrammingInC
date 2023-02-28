/*A prime number is any natural number greater than 1 that
is divisible only by 1 and by itself. Write a C program that reads an integer and determines whether
it is a prime number or not.*/

#include <stdio.h>

int main (void){

    int number;
    int i = 2;
    int count = 0;

    puts("Enter an integer to determine if it's a prime number : ");
    scanf("%d", &number);

    if(number == 1 && number == 0){
        printf("%d is not a prime number", number);
    }


    while( i <= number / 2)
    {
        // check for non prime number
        if(number % i == 0)
        {
            count=1;
            break;
        }
        i++;
    }
 
    if (count==0)
        printf("%d is a prime number.", number);
    else
        printf("%d is not a prime number.", number);
    
}