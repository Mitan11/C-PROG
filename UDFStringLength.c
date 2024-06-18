/*
Write a Program to find the length of the String by passing a string as an argument
using UDF. Do not use any string function.
For example,
Input:
Enter any string: development
Output:
Length is: 11
*/

#include<stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int len = 0; // Initialize the length counter to 0
    
    // Loop through the string until the null terminator is found
    while(str[len] != '\0') {
        len++; // Increment the length counter for each character
    }

    return len; // Return the calculated length of the string
}

void main() {
    char str[100]; // Declare a character array to store the input string

    // Prompt the user to enter a string
    printf("Enter Any String: ");
    scanf("%[^\n]", str); // Read the input string including spaces

    // Calculate the length of the string using the stringLength function
    int len = stringLength(str);

    // Print the length of the string
    printf("Length of String is %d", len);
}
