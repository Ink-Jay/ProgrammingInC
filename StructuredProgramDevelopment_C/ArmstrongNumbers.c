/*Armstrong numbers are numbers that are equal to the sum of their digits
raised to power of the number of digits in them. The number 153, for example, equals 13 + 53 + 33 .
Thus it is an Armstrong number. Write a program to display all three-digit Armstrong numbers.*/

#include <stdio.h>  
#include <math.h>

 int main(void) {    

        int number;
        int sum = 0;
        int digit; 
        int num;

        puts("Enter a three digit number :");    
        scanf("%d",&number); 
        num = number;  
         
        while(number > 0){  

        digit = number % 10;    

        sum = sum + (digit * digit * digit);  

        number = number / 10;  

        }    

        if(num == sum){

            printf("%d is an Armstrong number", num); 
        }    
        else{ 
            printf("%d is not an Armstrong number", num);
        }   
            
     
        }   