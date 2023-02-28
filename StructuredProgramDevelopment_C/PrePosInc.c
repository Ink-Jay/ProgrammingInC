/*(Preincrementing vs Postincrementing) Write a program that demonstrates the difference
between preincrementing and postincrementing using the increment operator ++.*/

#include<stdio.h>

int main (void){

     int num1 = 5;
     int num2 = 7;

     
     printf("num1 original : %d\n",num1);
     printf("num1 pre : %d\n", ++num1);
     printf("num1 value preincrement : %d\n\n",num1);

     printf("num1 original: %d\n",num1);
     printf("num1 post : %d\n", num1++);
     printf("num1 value postincrement : %d\n",num1);

}