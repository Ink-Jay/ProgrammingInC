/*find the two largest values of the 10 numbers. */

#include <stdio.h>

int main(void){

    int count = 1;
    int number;
    int largest = 0;
    int secondLargest = 0;

    while(count <= 10){

        puts("Enter a positive number : ");
        scanf("%d", &number);

        if(number > largest){
            secondLargest = largest;
            largest = number;

        }
        
        ++count;
    }

    printf("The largest number is : %d\n", largest);
     printf("The second largest number is : %d\n", secondLargest);
}