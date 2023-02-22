/*Write a program that inputs one five-digit number, separates
the number into its individual digits and prints the digits separated from one another by three
spaces each.*/

#include <stdio.h>

int main (void){

    int number;

    puts("Enter a five-digit number :");
    scanf("%d", &number);

    int firstValue = number / 10000;
    int secondValue = (number % 10000) / 1000;
    int thirdValue = ((number % 10000) % 1000) / 100;
    int fourthValue = (((number % 10000) % 1000) % 100) / 10;
    int fifthValue =  (((number % 10000) % 1000) % 100) % 10;

    printf("%d\t%d\t%d\t%d\t%d\t", firstValue, secondValue, thirdValue, fourthValue, fifthValue);
}