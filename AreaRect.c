/*
Write a Program to find the area of a rectangle.
Use Formula: length * width
Where 'l' is the length and 'w' is the width.
*/

#include<stdio.h>

void main(){
    // Declare variables to store the length and width of the rectangle
    int l, w;

    // Prompt the user to enter the length of the rectangle
    printf("Enter Length: ");
    // Read the length entered by the user and store it in variable 'l'
    scanf("%d", &l);

    // Prompt the user to enter the width of the rectangle
    printf("Enter Width: ");
    // Read the width entered by the user and store it in variable 'w'
    scanf("%d", &w);

    // Calculate the area of the rectangle using the formula: area = length * width
    int area = l * w;

    // Print the calculated area of the rectangle
    // The format specifier %d is used to print the integer value of 'area'
    printf("Area of Rectangle is %d\n", area);
}
