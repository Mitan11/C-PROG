/*
Write a Program to find the minimum number from the given 3 numbers using the
ternary operator.
For example,
Input:
Enter a value of the first number: 8
Enter a value of the second number: 3
Enter a value of the third number: 12
Output:
The minimum value is: 3
*/

#include<stdio.h>

void main(){
    // Declare variables for the three numbers
    int num1, num2, num3;
    
    // Prompt the user to enter the first number
    printf("Enter Number 1 : ");
    // Read the first number entered by the user and store it in 'num1'
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter Number 2 : ");
    // Read the second number entered by the user and store it in 'num2'
    scanf("%d", &num2);
    
    // Prompt the user to enter the third number
    printf("Enter Number 3 : ");
    // Read the third number entered by the user and store it in 'num3'
    scanf("%d", &num3);
    
    // Using ternary operator to find the minimum number among the three
    // The ternary operator syntax is: (condition) ? (if true) : (if false)
    (num1 > num2) ? 
        // If num1 is greater than num2
        (num1 > num3) ? 
            // If num1 is also greater than num3, then num1 is the greatest
            printf("Number 1 is Greater") 
            // If num1 is not greater than num3, then num3 is the greatest
            : printf("Number 3 is Greater") 
        // If num1 is not greater than num2, then check if num2 is greater than num3
        : (num2 > num3) ? 
            // If num2 is greater than num3, then num2 is the greatest
            printf("Number 2 is Greater") 
            // If num2 is not greater than num3, then num3 is the greatest
            : printf("Number 3 is Greater");
}
