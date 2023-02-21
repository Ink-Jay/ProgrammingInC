// Using if statements, relational operators, and equality operators
//to compare number
# include <stdio.h>

//function main begins execution
int main(void){
    
    int num1;
    int num2;

    printf( "Enter two integers, and I will tell you\n" );
    printf( "the relationships they satisfy: \n" );

    printf("Enter the first number for comparison\n");
    scanf("%d", &num1);

    printf("Enter the second number for comparison\n");
    scanf("%d", &num2);

    //Check for equality
    if(num1 == num2){

        printf("%d and %d are equal\n", num1,num2);

    }

    // Check for the greater value
    if(num1 > num2){

        printf("%d is greater than %d\n", num1,num2);

    }

     if(num1 < num2){

        printf("%d is less than %d\n", num1,num2);

    }

     if (num1 <= num2 ) {

           printf( "%d is less than or equal to %d\n", num1, num2 );

    } 

     if (num1 >= num2 ) {

         printf( "%d is greater than or equal to %d\n", num1, num2 );

    }
}