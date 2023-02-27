/* A program that calculates the
sum of the integers from 1 to 10. Use the while statement to loop through the calculation and increment
statements. The loop should terminate when the value of x becomes 11*/

#include <stdio.h>

int main (void){

    int x = 1;
    int sum = 0;

    while (x < 11)
    {
        sum += x;
        x++;

    }

    printf("The sum is %d", sum);
    

}