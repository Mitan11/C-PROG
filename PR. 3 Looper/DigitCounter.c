/*
Q.2 Digit Counter
Develop a Program to count the total number of digits in a number.
Example:
Input: Enter any number: 752
Output: Total number of digits: 3
*/

#include<stdio.h>

void main(){
    int num = 0, digit = 0, sum = 0; // Initialize variables: 'num' to store the user input, 'digit' to store each digit, and 'sum' to count the digits
    
    // Prompt the user to enter a number
    printf("Enter a Number : ");
    // Read the number entered by the user and store it in the 'num' variable
    scanf("%d", &num);
    
    // Use a while loop to count the digits in the number
    while(num > 0){
        digit = num % 10; // Get the last digit of the number
        sum++; // Increment the digit counter
        num /= 10; // Remove the last digit from the number
    }
    
    // Print the total number of digits
    printf("There are %d digits", sum);
}
