/*
Q.1 Length Finder
Develop a program that finds the length of a string using a pointer.

Example:
Input: Enter any string: hello world
Output: The length of a string is: 11
*/

#include<stdio.h>

// Function to calculate the length of a string
void stringLength(char str[], int *len) {
    // Loop until the end of the string is reached
    while (str[*len] != '\0') {
        (*len)++; // Increment the length counter for each character
    }
}

void main() {
    char str[100]; // Declare a character array to hold the string
    int len = 0; // Initialize the length counter to 0

    // Prompt the user to enter a string
    printf("Enter a String: ");
    scanf("%s", str); // Read the string from the user

    // Call the function to calculate the length of the string
    stringLength(str, &len);

    // Print the length of the string
    printf("Length of String is %d", len);
}
