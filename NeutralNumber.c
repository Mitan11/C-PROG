/*
Write a Program to find if a given number is neutral or not using a ladder if else.
For example,
Input:
Enter any number: -9
Output:
This number is Negative
-----------------------------------------------
For example,
Input:
Enter any number: 0
Output:
This number is Neutral
-----------------------------------------------
For example,
Input:
Enter any number: 7
Output:
This number is Positive
*/

#include<stdio.h>

void main() {
    // Declare a variable to store the number
    int num;
    
    // Prompt the user to enter a number
    printf("Enter Number : ");
    
    // Read the number entered by the user and store it in variable 'num'
    scanf("%d", &num);
    
    // Check if the number is equal to 0
    if(num == 0){
        // If the number is 0, print that it is neutral
        printf("This number is Neutral\n");
    }
    // Check if the number is greater than 0
    else if(num > 0){
        // If the number is greater than 0, print that it is positive
        printf("This number is Positive\n");
    }
    // If the above conditions are not met, then the number must be negative
    else{
        // Print that the number is negative
        printf("This number is Negative\n");
    }
}
