/*
Write a Program to find the area of a circle.
Use Formula: πr^2
Where r is the radius.
*/

#include<stdio.h>

// Define a constant for the value of PI
#define PI 3.14

void main(){
    // Declare variables to store the radius and the area of the circle
    float r, area;
    
    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    // Read the radius entered by the user and store it in variable 'r'
    scanf("%f", &r);
    
    // Calculate the area of the circle using the formula: area = π * r * r
    area = PI * r * r;
    
    // Print the calculated area of the circle
    // The format specifier %f is used to print the float value of 'area'
    printf("The area of the circle is %f\n", area);
}
