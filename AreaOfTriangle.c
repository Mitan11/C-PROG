/*
Write a Program to find the area of a triangle.
Use Formula: 1/2 * base * height
Where 'b' is the base and 'h' is the height.
*/

#include<stdio.h>

void main(){
    // Declare variables to store the base, height, and area of the triangle
    float area, b, h;
    
    // Prompt the user to enter the base of the triangle
    printf("Enter the Base of the Triangle: ");
    // Read the base entered by the user and store it in variable 'b'
    scanf("%f", &b);
    
    // Prompt the user to enter the height of the triangle
    printf("Enter the Height of the Triangle: ");
    // Read the height entered by the user and store it in variable 'h'
    scanf("%f", &h);
    
    // Calculate the area of the triangle using the formula: area = 0.5 * base * height
    area = 0.5 * (h * b);
    
    // Print the calculated area of the triangle
    // The format specifier %f is used to print the float value of 'area'
    printf("Area of Triangle is %f\n", area);
}
