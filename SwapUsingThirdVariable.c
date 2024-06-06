/*
Write a Program to Swap two variables using a third variable.
*/

#include<stdio.h>

void main(){
    // Declare variables for the two numbers and a temporary variable for swapping
    int num1, num2, temp;

    // Prompt the user to enter Number 1
    printf("Enter Number 1 : ");
    // Read Number 1 entered by the user and store it in variable 'num1'
    scanf("%d", &num1);

    // Prompt the user to enter Number 2
    printf("Enter Number 2 : ");
    // Read Number 2 entered by the user and store it in variable 'num2'
    scanf("%d", &num2);

    // Print the numbers before swapping
    printf("Before Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    // Swap the values of num1 and num2 using a temporary variable
    // Store the value of num1 in a temporary variable 'temp'
    temp = num1;
    // Assign the value of num2 to num1
    num1 = num2;
    // Assign the original value of num1 (stored in 'temp') to num2
    num2 = temp;

    // Print the numbers after swapping
    printf("After Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);
}
