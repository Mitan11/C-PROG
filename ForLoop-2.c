/*
Write a Program to print the sum of all numbers from 1 to N using a for loop.
For example,
Input:
Enter any number: 8
Output:
The sum of all numbers: 36
*/

#include<stdio.h>

void main(){
    // Declare variables
    int n , sum = 0;
    
    // Prompt the user to enter a number
    printf("Enter a number : ");
    // Read the input number
    scanf("%d", &n);
    
    // Iterate from 1 to n using a for loop
    for(int i = 1; i <= n; i++){
        // Add each number to the sum
        sum += i;
    }
    
    // Print the sum of all numbers
    printf("The sum of all numbers is %d", sum);
}
