//Program that adds two number
# include <stdio.h>

//function main begins
int main (void){

    int integer1;
    int integer2;

    printf("Enter thr first integer\n"); //prompt
    scanf("%d", &integer1); //read an integer

    printf("Enter the second integer\n"); //prompt
    scanf("%d", &integer2); //read an integer

    int sum ;

    sum = integer1 + integer2; //add the two number and assign the total to sum

    printf("The sum is %d", sum);

} // end function main