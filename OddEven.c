/*
Write a program that takes an integer as input and prints whether it is even or odd
*/

#include<stdio.h>

void main(){
    // Declare a variable to store the input number
    int num;
    
    // Prompt the user to enter a number
    printf("Enter Number : ");
    
    // Read the input number
    scanf("%d",&num);
    
    // Check if the number is even or odd using the modulo operator
    // If the remainder when divided by 2 is 0, it's even; otherwise, it's odd
    (num % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
}
