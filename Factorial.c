/*The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.*/

#include <stdio.h>

int main (void){

    int n;
    int factorial;
    int count = 1;

    puts("Enter a non-negative integer to find its factorial:");
    scanf("%d", &n);
    factorial = 1;

    if(n == 0){
         printf("The factorial of 0 is 1\n");
    }
    else{

    while (count <= n)
    {
        factorial *= count;

        count++;
    }

    printf("The factorial of %d is %d", n, factorial);

    }
    
}