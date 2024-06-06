/*
Write a Program to find the Perimeter of the circle.
Use Formula: 2 * PI * r
Where 'r' is the radius.
*/

#include<stdio.h>

// Define a constant PI with the value of 3.14159
#define PI 3.14159

void main(){
    // Declare a variable to store the radius of the circle
    float r;
    
    // Prompt the user to enter the radius of the circle
    printf("Enter The Radius of the Circle : ");
    // Read the radius entered by the user and store it in variable 'r'
    scanf("%f", &r);
    
    // Calculate the perimeter of the circle using the formula: 2 * PI * r
    r = 2 * PI * r;
    
    // Print the calculated perimeter of the circle
    // The format specifier %.5f is used to print the floating-point value of 'r' with 5 decimal places
    printf("Perimeter of the Circle is %.5f\n", r);
}
