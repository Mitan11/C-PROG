/*
Write a Program to print odd numbers from N to 1 using a while loop.
For example,
Input:
Enter any number: 15
Output:
15 13 11 9 7 5 3 1
*/

#include<stdio.h>

void main(){
    int n; // Declare a variable to store the input number 'n'
    printf("Enter a number : "); // Prompt the user to enter a number
    scanf("%d",&n); // Read the input number from the user and store it in 'n'
    int i = n; // Initialize a variable 'i' with the input number 'n'
    // Loop through numbers from 'n' to 1
    while (i >= 1){
        printf("%d\n", i); // Print the current value of 'i'
        i-=2; // Decrement 'i' by 2 to get the next odd number
    }
}
