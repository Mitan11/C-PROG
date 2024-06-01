/*
Write a program that takes four integer as input from the user and evaluate the expression (a + b) * (c - d).
*/

#include<stdio.h>

// Main function where the program starts execution
void main(){
    // Declare variables to store the four integers a, b, c, d
    int a, b, c, d;

    // Prompt the user to enter the first integer
    printf("Enter Number 1 : ");

    // Read the input from the user and store it in the a variable
    scanf("%d", &a);

    // Prompt the user to enter the second integer
    printf("Enter Number 2 : ");

    // Read the input from the user and store it in the b variable
    scanf("%d", &b);

    // Prompt the user to enter the third integer
    printf("Enter Number 3 : ");

    // Read the input from the user and store it in the c variable
    scanf("%d", &c);

    // Prompt the user to enter the fourth integer
    printf("Enter Number 4 : ");

    // Read the input from the user and store it in the d variable
    scanf("%d", &d);

    // Evaluate the expression (a + b) * (c - d) using the order of operations (PEMDAS)
    // First, evaluate the expressions inside the parentheses
    // Then, multiply the two results
    int eval = (a + b) * (c - d);

    // Print the result of the expression
    printf("Evaluated Expression is %d", eval);
}