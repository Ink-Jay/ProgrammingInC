// Analysis of examination results.

/*A college offers a course that prepares students for the state licensing exam for realestate
brokers. Last year, 10 of the students who completed this course took the licensing
examination. Naturally, the college wants to know how well its students did on the
exam. You’ve been asked to write a program to summarize the results. You’ve been
given a list of these 10 students. Next to each name a 1 is written if the student passed
the exam or a 2 if the student failed.
Your program should analyze the results of the exam as follows:
1. Input each test result (i.e., a 1 or a 2). Display the prompting message “Enter
result” each time the program requests another test result.
2. Count the number of test results of each type.
3. Display a summary of the test results indicating the number of students who
passed and the number who failed.
4. If more than eight students passed the exam, print the message “Bonus to instructor!”*/

#include <stdio.h>

int main (void){

   unsigned int passes = 0;
    unsigned int fails = 0;
    int students = 1;
    int result;

    while(students <= 10){

      printf( "%s", "Enter result code ( 1 = pass, 2 = fail ): " );
        scanf("%d", &result);

        if(result == 1){
            passes++;
        }

        else{
            fails ++;
        }

        students++;
    }

    printf("The number of passes : %u\n", passes);
    printf("The number of fails : %u\n", fails);

    if(passes >= 8){
        puts("Bonus to instructor!");
    }
    
}