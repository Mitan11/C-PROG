/*
Write a program that takes five integer as input from the user and evaluate the expression a * b *c / d - e.
*/

#include<stdio.h>

// Main function where the program starts execution
void main(){
    // Declare variables to store the five integers a, b, c, d, e
    int a, b, c, d, e;

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

    // Prompt the user to enter the fifth integer
    printf("Enter Number 5 : ");

    // Read the input from the user and store it in the e variable
    scanf("%d", &e);

    // Evaluate the expression a * b *c / d - e
    // Note: The expression is not evaluated correctly, it should be a * b * c / d - e
    // The correct evaluation is:
    // 1. Multiply a, b, and c
    // 2. Divide the result by d
    // 3. Subtract e from the result
    int eval = a * b * c / d - e;

    // Print the result of the expression
    printf("Evaluated Expression is %d", eval);
}