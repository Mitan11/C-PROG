/*
Write a Program to print the Fibonacci series up to N numbers using a for loop.
For example,
Input:
Enter any number: 8
Output:
0, 1, 1, 2, 3, 5, 8, 13
*/

#include<stdio.h>

void main(){
    // Declare variables
    int i, n;
    int f1 = 1, f2 = 0, f3 = 0;
    
    // Prompt the user to enter the number of terms for the Fibonacci series
    printf("Enter a Number For Fibonacci Series : ");
    // Read the input number
    scanf("%d",&n);
    
    // Iterate from 1 to n using a for loop
    for(int i = 1; i <= n; i++){
        // Print the current Fibonacci number
        printf("\n%d",f3);
        // Calculate the next Fibonacci number
        f3 = f1 + f2;
        // Update the values of f1 and f2 for the next iteration
        f1 = f2;
        f2 = f3;
    }
}
