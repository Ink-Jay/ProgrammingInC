/*Floyd’s Triangle is a right-angled triangular array of natural numbers. It
is defined by filling rows with consecutive integers. Thus, row 1 will have the number 1, row 2 will
have the numbers 2 and 3, and so on. Write a program that draws a 10-line Floyd’s triangle.*/

#include <stdio.h>

int main(void){

    int i = 1;
    int j;
    int num = 1;

    while( i < 10){

        j = 1;

        while (j <= i){
            
            printf("%d \t", num++);
           
            j++;
            
        }
        i++;
        puts("");
        
    }
}