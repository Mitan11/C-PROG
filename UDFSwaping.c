/*
Write a program in c to swap two numbers using a function
*/

#include<stdio.h>

// Function to swap two numbers
void swap(int num1, int num2) {
    int temp = num1; // Store the value of num1 in a temporary variable
    num1 = num2;     // Assign the value of num2 to num1
    num2 = temp;     // Assign the value of temp (original num1) to num2

    // Print the values of num1 and num2 after swapping
    printf("Number 1 After Swapping is %d\n", num1);
    printf("Number 2 After Swapping is %d", num2);
}

void main() {
    int num1, num2; // Declare two integer variables to store the input numbers

    // Prompt the user to enter the first number
    printf("Enter Number 1: ");
    scanf("%d", &num1); // Read the first number from the user

    // Prompt the user to enter the second number
    printf("Enter Number 2: ");
    scanf("%d", &num2); // Read the second number from the user

    // Print the values of num1 and num2 before swapping
    printf("Number 1 Before Swapping is %d\n", num1);
    printf("Number 2 Before Swapping is %d\n", num2);

    // Call the swap function to swap the values of num1 and num2
    swap(num1, num2);
}
