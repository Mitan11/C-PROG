/*
Write a program that takes three integer as input from the user and evaluate the expression a + b * c - b / c.
*/

#include <stdio.h>

// Main function where the program starts execution
void main(){
    // Declare variables to store the three integers
    int a, b, c;

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

    // Evaluate the expression a + b * c - b / c
    int eval = a + b * c - b / c;

    // Print the result of the expression
    printf("Evaluated Expression is %d", eval);
}