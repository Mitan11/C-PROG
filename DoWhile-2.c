/*
Write a Program to print even numbers from 1 to N using a do-while loop.
For example,
Input:
Enter any number: 9
Output:
2 4 6 8
*/

#include<stdio.h>

void main(){
    // Declare variable to store user input
    int n;
    // Prompt the user to enter a number
    printf("Enter a number : ");
    // Read the input number
    scanf("%d",&n);
    // Initialize loop variable i to start from 1
    int i = 1;
    // Start a do-while loop to iterate from 1 to the input number
    do{
        // Check if the current number is even
        if(i % 2 == 0)
            // Print the current even number
            printf("%d\n",i);
        // Increment the loop variable
        i++;
    }while(i <= n); // Continue the loop until i is less than or equal to the input number
}
