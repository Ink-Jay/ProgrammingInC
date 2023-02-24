// Class-average program with sentinel-controlled iteration.

#include <stdio.h>

int main(void){

    int total = 0;
    unsigned int count = 0;     // store positive values only
    int grade;
    float average;

     printf( "%s", "Enter grade, -1 to end: " );
     scanf("%d", &grade);

     while(grade != -1){    // sentinel

        total = total + grade;

        count ++;

       printf( "%s", "Enter grade, -1 to end: " );   //get subsequent grades 
       scanf("%d", &grade);
     }

     if( count != 0){

        average = (float)total / count ;              // Use of a cast operator - explicit conversion

        printf( "Class average is %0.2f \n", average );  // two digits precision for formatting

     }

     else {
        puts("No grade value entered");
     }


}
