/*
Write a Program to print the factorial of number N using a for loop.
For example,
Input:
Enter any number: 5
Output:
The factorial is: 120
*/

#include<stdio.h>

void main(){
    // Declare variables
    int n , fact = 1;
    
    // Prompt the user to enter a number
    printf("Enter a number whose factorial you want : ");
    // Read the input number
    scanf("%d", &n);
    
    // Calculate factorial using a for loop
    for(int i = 1; i <= n; i++){
        fact *= i; // Multiply each number from 1 to n
    }
    
    // Print the factorial
    printf("Factorial of %d is %d", n, fact);
}
