/*
Write a Program to print 1 to N using a while loop.
For example,
Input:
Enter any number: 7
Output:
1 2 3 4 5 6 7
*/

#include<stdio.h>

void main(){
    int n; // Declare a variable to store the input number 'n'
    printf("Enter a number : "); // Prompt the user to enter a number
    scanf("%d",&n); // Read the input number from the user and store it in 'n'
    int i = 1; // Initialize a counter variable 'i' to start from 1
    // Loop through numbers from 1 to 'n'
    while (i <= n){
        printf("%d\n", i); // Print the current value of 'i'
        i++; // Increment 'i' by 1 for the next iteration
    }
}
