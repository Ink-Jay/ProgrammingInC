/*Write a program that reads the radius of a
circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
the value 3.14159 for π.*/

#include <stdio.h>

int main (void){

    float radius;
    float diameter;
    float circumference;
    float area;
    float pi = 3.14159;

    puts("Enter the radius as a float value :");
    scanf("%f", &radius);

    diameter = radius * 2;
    circumference = pi * diameter;
    area = pi * (radius * radius);

    printf("Diameter : %.2f\nCircumference : %.2f\nArea : %.2f", diameter, circumference, area);
}