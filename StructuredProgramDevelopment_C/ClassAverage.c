// Class average program with counter-controlled iteration.

#include <stdio.h>

int main(void){

    int total = 0;
    unsigned int count = 1; //can store only non-negative values
    int grade;

    while(count <= 10){ // loop 10 times
        puts("Enter the grade:");
        scanf("%d", &grade);

        total = total + grade; //add grade to total
        count++;                //increment counter by one
    }

    int average = total / 10;

    printf("The class average is : %d", average);

}