/*
Q.1 Calculator
Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.
Example:
Input/Output:

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1

Enter the first number: 5

Enter the second number: 3

Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4

Enter the first number: 10

Enter the second number: 5

Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/

#include <stdio.h>

// Global variable to store the result of operations
int ans;

// Function to perform addition
void addition(int num1, int num2) {
    ans = num1 + num2;
    printf("\nAddition of %d and %d is %d", num1, num2, ans);
}

// Function to perform subtraction
void subtraction(int num1, int num2) {
    ans = num1 - num2;
    printf("\nSubtraction of %d and %d is %d", num1, num2, ans);
}

// Function to perform multiplication
void multiplication(int num1, int num2) {
    ans = num1 * num2;
    printf("\nMultiplication of %d and %d is %d", num1, num2, ans);
}

// Function to perform division
void division(int num1, int num2) {
    ans = num1 / num2;
    printf("\nDivision of %d and %d is %d", num1, num2, ans);
}

// Function to perform modulus operation
void modulus(int num1, int num2) {
    ans = num1 % num2;
    printf("\nModulus of %d and %d is %d", num1, num2, ans);
}

// Main function
void main() {
    int choice, num1, num2; // Variables to store user's choice and input numbers

    // Loop to keep the program running until the user chooses to exit
    do {
        // Displaying the menu options to the user
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Exit");

        // Prompting the user to enter their choice
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        // If the choice is not to exit, prompt the user to enter two numbers
        if (choice < 6) {
            printf("Enter Number 1: ");
            scanf("%d", &num1);
            printf("Enter Number 2: ");
            scanf("%d", &num2);
        }

        // Using switch case to perform the appropriate operation based on user's choice
        switch (choice) {
            case 1:
                addition(num1, num2); // Call addition function
                break;
            case 2:
                subtraction(num1, num2); // Call subtraction function
                break;
            case 3:
                multiplication(num1, num2); // Call multiplication function
                break;
            case 4:
                division(num1, num2); // Call division function
                break;
            case 5:
                modulus(num1, num2); // Call modulus function
                break;
            case 6:
                break; // Exit the program
            default:
                // If the user enters an invalid choice, display an error message
                printf("\nInvalid Choice. Try Again....!");
        }
    } while (choice < 6); // Continue the loop until the user chooses to exit (choice 6)
}
