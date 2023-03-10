/*Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should determine
and display the employee's gross pay.*/

#include<stdio.h>
#include<stdlib.h>

int main (void){

    int hours; // assume no fractions of an hour
    float hourlyRate;
    float overTimeRate = 1.5;
    float salary;
    int straightTime = 40;

    puts("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    if(hours == -1){
        exit(0);
    }

    puts("Enter hourly rate of the worker ($00.00): ");
    scanf("%f", &hourlyRate);
    
    if(hours > 40){
          float overTime = (float)hours - straightTime;  //cast hours to float

         salary = (straightTime * hourlyRate) + (overTime * overTimeRate * hourlyRate);
    }
    else {
        salary = (straightTime * hourlyRate);
    }

    printf("Salary is : %.2f", salary);
}