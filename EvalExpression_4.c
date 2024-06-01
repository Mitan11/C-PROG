/*
Write a Program to evaluate the formula: (𝑥 + 𝑦)^2
*/

#include<stdio.h>

void main(){
    // Declare variables for input values, expression result, and temporary variables
    int x, y, ans;

    // Prompt the user to enter the value of x
    printf("Enter the value of x: ");
    // Read the value of x entered by the user and store it in variable 'x'
    scanf("%d", &x);

    // Prompt the user to enter the value of y
    printf("Enter the value of y: ");
    // Read the value of y entered by the user and store it in variable 'y'
    scanf("%d", &y);

    // Calculate the expression (x + y)^2
    // Store the result in the variable 'ans'
    ans = (x + y) * (x + y);

    // Print the evaluated expression
    // The format specifier '%d' is used to print the integer value of 'ans'
    printf("Evaluated Expression is %d\n", ans);
}
