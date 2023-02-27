/* Program to calculate x raised to the y
power. The program should have a while iteration control statement.*/

#include <stdio.h>

int main (void){

    unsigned int x;
    unsigned int y;
    unsigned int i = 1;
    unsigned int power = 1;

    puts("Enter the base integer:");
    scanf("%u", &x);

    puts("Enter the index:");
    scanf("%u", &y);

    while (i <= y)
    {
        power *= x;

        ++i;
    }

    printf("The result of %u raised to the power of %u is %u", x, y, power);
    
}
