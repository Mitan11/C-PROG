#include<stdio.h>

void main(){
    // Declare variables for the two numbers
    int num1, num2;
    
    // Prompt the user to enter Number 1
    printf("Enter Number 1 : ");
    // Read Number 1 entered by the user and store it in variable 'num1'
    scanf("%d",&num1);
    
    // Prompt the user to enter Number 2
    printf("Enter Number 2 : ");
    // Read Number 2 entered by the user and store it in variable 'num2'
    scanf("%d",&num2);

    // Print the numbers before swapping
    printf("Before Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    // Method 1: Swapping without using a third variable
    // Add num1 and num2, then assign the result to num1
    num1 = num1 + num2;
    // Subtract num2 from num1, then assign the result to num2
    num2 = num1 - num2;
    // Subtract num2 from num1, then assign the result to num1
    num1 = num1 - num2;

    // Print the numbers after swapping using Method 1
    printf("After Swapping\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    // Method 2: Swapping using bitwise XOR (^) without using a third variable
    /* Perform XOR operations to swap the numbers
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    // Print the numbers after swapping using Method 2
    printf("After Swapping\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);
    */
}
