/*
Q.3 Digit Addition
Develop a Program to find the sum of a number's first and last digits.
Example:
Input: Enter any number: 384
Output: The sum of the first and the last digit: 7
*/

#include<stdio.h>

void main(){
    int num = 0, digit = 0, sum = 0; // Initialize variables: 'num' to store the user input, 'digit' to store the last digit, and 'sum' to store the sum of the first and last digits

    // Prompt the user to enter a number
    printf("Enter a Number : ");
    // Read the number entered by the user and store it in the 'num' variable
    scanf("%d", &num);
    
    // Extract the last digit of the number
    digit = num % 10;
    
    // Use a while loop to find the first digit of the number
    while(num >= 10){
        num /= 10; // Remove the last digit from the number until only the first digit remains
    }
    
    // Calculate the sum of the first and last digits
    sum = digit + num;
    
    // Print the sum of the first and last digits
    printf("First and Last Digit Addition is %d", sum);
}
