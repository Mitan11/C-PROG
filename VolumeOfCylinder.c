/*
Write a program that take the radius and height of a cylinder as input from the user and 
calculate the volume of cylinder using the formula volume = PIE * radius * radius * height
*/

#include<stdio.h>

// Define a constant for PI
#define PI 3.14159

// Main function where the program starts execution
void main(){
    // Declare variables to store the radius, height, and volume
    float r, h, v;

    // Prompt the user to enter the radius
    printf("Enter The Radius of The Cylinder : ");

    // Read the input from the user and store it in the radius variable
    scanf("%f",&r);

    // Prompt the user to enter the height
    printf("Enter The Height of The Cylinder : ");

    // Read the input from the user and store it in the height variable
    scanf("%f",&h);

    // Calculate the volume of the cylinder using the formula
    v = PI * r * r * h;

    // Print the result with 5 decimal places
    printf("Volume of The Cylinder is %.5f",v);
}