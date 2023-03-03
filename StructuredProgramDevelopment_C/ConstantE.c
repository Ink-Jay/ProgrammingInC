/*Write a program that estimates the value of the mathematical constant e by using the
formula*/

#include <stdio.h>

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

    float e;

    e = 1 + 1 / factorial(1) + 1 / factorial(2) + 1 / factorial(3);

    printf("The estimation of constant e is : %.2f\n", e);
    


}