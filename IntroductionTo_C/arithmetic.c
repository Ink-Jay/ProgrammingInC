// program that finds the sum, product, difference, quotient and remainder.
# include <stdio.h>

//function main begins execution
int main (void){

    int x;
    int y;

    printf("Enter two different integers:\n");
    scanf("%d %d", &x, &y);

    //sum
    int sum = x + y;
    printf("The sum is : %d\n", sum);

    //prodcut
    int product = x * y;
    printf("The product is : %d\n", product);

    //difference
    int diff = x -y;
    printf("The difference is : %d\n", diff);

    //quotient
    int quotient = x / y;
    printf("The quotient is : %d\n", quotient);

    //remainder
    int rem = x % y;
    printf("The remainder is : %d\n", rem);
}