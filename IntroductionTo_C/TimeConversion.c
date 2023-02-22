/*Write a program that asks the
user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds.*/ 

#include <stdio.h>

int main (void){

    int elapsedTime;

    puts("Enter the time that has elapsed in seconds:");
    scanf("%d", &elapsedTime);

    int hours = elapsedTime / 3600;
    int minutes = (elapsedTime % 3600) / 60;
    int seconds = (elapsedTime % 3600) % 60;

    printf("Time taken : %d:%d:%d", hours, minutes, seconds);
}