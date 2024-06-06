/*
Write a Program to find the maximum number from the given 4 numbers using nested
if else. Also, draw a Flowchart in your book.
For example,
Input:
Enter a value of the first number: 8
Enter a value of the second number: 3
Enter a value of the third number: 12
Enter a value of the fourth number: 7
Output:
The maximum value is: 12
*/

#include<stdio.h>

void main(){
    // Declare variables for the four numbers
    int num1, num2, num3, num4;
    
    // Prompt the user to enter the first number
    printf("Enter a value of the first number : ");
    // Read the first number entered by the user and store it in 'num1'
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter a value of the second number : ");
    // Read the second number entered by the user and store it in 'num2'
    scanf("%d", &num2);
    
    // Prompt the user to enter the third number
    printf("Enter a value of the third number : ");
    // Read the third number entered by the user and store it in 'num3'
    scanf("%d", &num3);
    
    // Prompt the user to enter the fourth number
    printf("Enter a value of the fourth number : ");
    // Read the fourth number entered by the user and store it in 'num4'
    scanf("%d", &num4);
    
    // Nested if-else statements to find the maximum number
    if(num1 > num2){ // If num1 is greater than num2
        if(num1 > num3){ // If num1 is greater than num3
            if(num1 > num4){ // If num1 is also greater than num4
                printf("The maximum value is %d", num1); // num1 is the largest
            }
            else{ // If num4 is greater than num1
                printf("The maximum value is %d", num4); // num4 is the largest
            }
        }
        else{ // If num3 is greater than num1
            if(num3 > num4){ // If num3 is also greater than num4
                printf("The maximum value is %d", num3); // num3 is the largest
            }
            else{ // If num4 is greater than num3
                printf("The maximum value is %d", num4); // num4 is the largest
            }
        }
    }
    else{ // If num2 is greater than num1
        if(num2 > num3){ // If num2 is greater than num3
            if(num2 > num4){ // If num2 is also greater than num4
                printf("The maximum value is %d", num2); // num2 is the largest
            }
            else{ // If num4 is greater than num2
                printf("The maximum value is %d", num4); // num4 is the largest
            }
        }
        else{ // If num3 is greater than num2
            if(num3 > num4){ // If num3 is also greater than num4
                printf("The maximum value is %d", num3); // num3 is the largest
            }
            else{ // If num4 is greater than num3
                printf("The maximum value is %d", num4); // num4 is the largest
            }
        }
    }
}
