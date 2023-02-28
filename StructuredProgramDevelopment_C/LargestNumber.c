/*The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 non-negative numbers and determines and prints the largest of
the numbers.*/

#include <stdio.h>

int main(void){

    int count = 1;
    int number;
    int largest = 0;

    while(count <= 10){

        puts("Enter a positive number : ");
        scanf("%d", &number);

        if(number > largest){
            largest = number;
        }

        ++count;
    }

    printf("The largets number is : %d", largest);
}