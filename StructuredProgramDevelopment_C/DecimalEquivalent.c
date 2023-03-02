/*Input an integer (5 digits or fewer)
containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent.*/

#include <stdio.h>

int main(void){

    int binaryInteger;
    int decimalEquivalent;

    puts("Enter a binary number with 5 or fewer digits : ");
    scanf("%d", &binaryInteger);

    // from right to left , 5th digit is the first from the right

    int fifth = ((((binaryInteger % 10000) % 1000) % 100) % 10);
    printf("%d", fifth);
    int fourth = ((((binaryInteger % 10000) % 1000) % 100) / 10); 
    printf("%d", fourth);
    int third = (((binaryInteger % 10000) % 1000) / 100);
    printf("%d", third);
    int second = ((binaryInteger % 10000) / 1000);
    printf("%d", second);
    int first = (binaryInteger / 10000);
    printf("%d", first);

    decimalEquivalent = ((fifth * 1) + (fourth * 2) + (third * 4) + (second * 8) + (first * 16));

    printf("The decimal equivalent of %d is %d \n", binaryInteger, decimalEquivalent);


}