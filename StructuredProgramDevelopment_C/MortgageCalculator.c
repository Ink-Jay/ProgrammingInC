/*Develop a C program to calculate the interest accrued on a bank customer's
mortgage.*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int accountNumber;
    float mortgageAmount;
    int mortgageTerm;
    float interestRate;
    float monthPayable;

    puts("Enter account number (-1 to end):");
    scanf("%d", &accountNumber);
    puts("Enter mortgage amount (in dollars): ");
    scanf("%f", &mortgageAmount);
    puts("Enter mortgage term (in years): ");
    scanf("%d", &mortgageTerm);
    puts("Enter interest rate (as a decimal): ");
    scanf("%f", &interestRate);
     
     //calculate the monthly payable interest
    monthPayable = mortgageAmount * interestRate * mortgageTerm;

    printf("The monthly payable interest : %.2f", monthPayable);



}