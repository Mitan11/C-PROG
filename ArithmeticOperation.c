/*
Write a Program to perform all arithmetic operations such as +, -, *, / and %.
For example,
Output:
Addition of 12 and 6 is 18
Subtraction of 12 and 6 is 6
Multiplication of 12 and 6 is 72
Division of 12 and 6 is 2
Modulo of 12 and 6 is 0
12 + 6 = 18
12 - 6 = 6
12 * 6 = 72
12 / 6 = 2
12 % 6 = 0
*/

#include<stdio.h>

void main() {
    // Declare variables to store the two input numbers
    int a, b;
    
    // Prompt the user to enter the first number
    printf("Enter Number 1 : ");
    // Read the first number entered by the user and store it in variable 'a'
    scanf("%d", &a);
    
    // Prompt the user to enter the second number
    printf("Enter Number 2 : ");
    // Read the second number entered by the user and store it in variable 'b'
    scanf("%d", &b);
    
    // Perform addition and print the result
    printf("Addition is %d\n", a + b);
    
    // Perform subtraction and print the result
    printf("Subtraction is %d\n", a - b);
    
    // Perform multiplication and print the result
    printf("Multiplication is %d\n", a * b);
    
    // Perform division and print the result
    printf("Division is %d\n", a / b);
    
    // Perform modulus operation and print the result
    printf("Modulus is %d", a % b);
}
