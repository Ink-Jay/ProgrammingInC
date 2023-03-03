/*Write a program that prints 500 dollar signs ($) one
after the other, separated by a space. After every fiftieth dollar sign, the program should print a
newline character.*/

#include <stdio.h>

int main(void){
    int count = 1;
    int div = 50;

    while (count <= 500)
    {
       printf("$ ");

       if(count % 50 == 0){
        puts("");
       }
       count++;
    }
    
}