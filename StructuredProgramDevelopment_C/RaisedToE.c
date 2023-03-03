/*Write a program that computes the value of ex by using the formula*/

#include <stdio.h>
#include <math.h>

int factorial(int n){
        int factorial = 1;
        int count = 1;

        if(n == 0){
            return 1;
        }
        else{

        while (count <= n)
        {
            factorial *= count;

            count++;
        }
        return factorial;
}
}

int main (void){

    float ePowerx;
    int x;

    puts("Enter value of x :");
    scanf("%d", &x);

    ePowerx = 1 +  (x / factorial(1)) + ((pow(x,2)) / factorial(2)) + ((pow(x,3)) / factorial(3));

    printf("%d raised to the constant e is : %.1f", x, ePowerx);
}