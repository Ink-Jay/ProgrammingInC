/*Sales tax is collected from buyers and remitted to the government. A retailer
has to file a monthly sales tax report which lists the sales for the month and the amount of sales
tax collected, at both the county and state levels. Develop a program that will input the total collections
for a month, calculate the sales tax on the collections, and display the county and state
taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax. Here is a sample
input/output dialog.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int totalCollected;
    char month [10];    //declaring "strings" in C
    float sales;
    float countyTax;
    float stateTax;
    float totalTax;
    float stateTaxRate = 0.04;
    float countyTaxRate = 0.05;


    puts("Enter total amount collected (-1 to quit):");
    scanf("%d", &totalCollected);

    if(totalCollected == -1){
        exit(0);
    }

    puts("Enter the month of the year :");
    scanf("%s", &month);

    countyTax = countyTaxRate * totalCollected;
    stateTax = stateTaxRate * totalCollected;
    totalTax = countyTax + stateTax;

    sales = totalCollected - totalTax;

    printf("For the month of %s : \n");
    printf("Sales : Ksh.%.2f\n", sales);
    printf("County Tax : Ksh.%.2f\n", countyTax);
    printf("State Tax : Ksh.%.2f\n", stateTax);
    printf("Total tax collected : Ksh.%.2f\n", totalTax);
    
   
}
