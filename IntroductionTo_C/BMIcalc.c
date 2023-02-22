/*Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate
his/her BMI*/


#include <stdio.h>

int main (void){
    
    int weight;
    int height;
    

    puts("Enter weight in Kgs :");
    scanf("%d", &weight);
    puts("Enter height in meters :");
    scanf("%d", &height);

    int BMI = weight / (height * height);    // not accurate due to int values

    printf("Your BMI IS %d\n", BMI);

    puts("BMI Values :");
    puts("Underweight: less than 18.5");
    puts("Normal: between 18.5 and 24.9");
    puts("Overweight: between 25 and 29.9");
    puts("Obese: 30 or greater");

}