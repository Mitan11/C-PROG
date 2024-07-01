/*
Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3
Output:
Before swapping:
x: 5
y: 3
After swapping:
x: 3
y: 5
*/

#include<stdio.h>

// Function to swap the values of two integers
void swap(int *a, int *b) {
    int temp = *a; // Store the value of the first integer in a temporary variable
    *a = *b; // Assign the value of the second integer to the first integer
    *b = temp; // Assign the value stored in the temporary variable to the second integer
}

void main() {
    int a, b; // Declare two integer variables to hold the numbers to be swapped

    // Prompt the user to enter the first number
    printf("Enter Number 1: ");
    scanf("%d", &a); // Read the first number from the user and store it in 'a'
    
    // Prompt the user to enter the second number
    printf("Enter Number 2: ");
    scanf("%d", &b); // Read the second number from the user and store it in 'b'

    // Print the values of 'a' and 'b' before swapping
    printf("Before Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Call the swap function, passing the addresses of 'a' and 'b'
    swap(&a, &b);

    // Print the values of 'a' and 'b' after swapping
    printf("After Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
