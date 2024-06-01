/*
Write a Program to find the minimum number from the given 3 numbers using nested
if else. Also, draw a Flowchart in your book.
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
    printf("Enter a value of the first number: ");
    // Read the first number entered by the user and store it in 'num1'
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter a value of the second number: ");
    // Read the second number entered by the user and store it in 'num2'
    scanf("%d", &num2);
    
    // Prompt the user to enter the third number
    printf("Enter a value of the third number: ");
    // Read the third number entered by the user and store it in 'num3'
    scanf("%d", &num3);
    
    // Nested if-else statements to find the minimum number
    if(num1 < num2){
        // If num1 is less than num2, compare num1 with num3
        if(num1 < num3){
            printf("The minimum value is: %d", num1);
        }
        else{
            printf("The minimum value is: %d", num3);
        }
    }
    else{
        // If num2 is less than or equal to num1, compare num2 with num3
        if(num2 < num3){
            printf("The minimum value is: %d", num2);
        }
        else{
            printf("The minimum value is: %d", num3);
        }
    }
}
