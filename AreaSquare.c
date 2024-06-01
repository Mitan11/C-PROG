/*
Write a program that takes the side length of a square as input from the user and calculates the area of the square.
*/

#include<stdio.h>

void main(){
    // Declare a variable to store the side length of the square
    int s;
    
    // Prompt the user to enter the side length
    printf("Enter Side : ");
    
    // Read the side length from the user
    scanf("%d",&s);
    
    // Calculate the area of the square using the formula: area = side * side
    int area = s * s;
    
    // Print the calculated area
    printf("Area of Square is %d", area);
}
