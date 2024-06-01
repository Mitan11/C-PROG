/*
Write a Program to find Simple interest.
Use Formula: (p * r * n) / 100
Where 'p' is the principal amount, 'r' is the rate, and 'n' is the time in years.
*/

#include<stdio.h>

void main(){
    // Declare variables to store the principal amount, rate, time, and simple interest
    int p, r, n, si;

    // Prompt the user to enter the principal amount
    printf("Enter Principal Amount: ");
    // Read the principal amount entered by the user and store it in variable 'p'
    scanf("%d", &p);

    // Prompt the user to enter the rate of interest
    printf("Enter Rate of Interest: ");
    // Read the rate of interest entered by the user and store it in variable 'r'
    scanf("%d", &r);

    // Prompt the user to enter the period in years
    printf("Enter Period (in Years): ");
    // Read the period entered by the user and store it in variable 'n'
    scanf("%d", &n);

    // Calculate the simple interest using the formula: (p * r * n) / 100
    si = (p * r * n) / 100;

    // Print the calculated simple interest
    // The format specifier %d is used to print the integer value of 'si'
    printf("Simple Interest is %d\n", si);
}
