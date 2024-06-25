/*
Q.1 Pelindrome Checker
Develop a program that checks whether a given string is a palindrome or not without using string
functions.
Example:
Input: Enter any string: nayan
Output: The given string is a Palindrome.
*/
#include <stdio.h>

void main() {
    char str[100]; // Declare a character array to store the input string

    // Prompt the user to enter a string
    printf("Enter a String: ");
    scanf("%s", str); // Read the string from user input

    // Calculate the length of the string manually
    int length = 0;
    while (str[length] != '\0') {
        length++; // Increment the length counter until the null character is found
    }

    // Create a reversed string manually
    char rev[100]; // Declare a character array to store the reversed string
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i]; // Assign characters from the end of the original string to the reversed string
    }
    rev[length] = '\0';  // Null-terminate the reversed string

    // Compare the original and reversed strings manually
    int isPalindrome = 1; // Flag to indicate if the string is a palindrome
    for (int i = 0; i < length; i++) {
        if (str[i] != rev[i]) { // Compare characters of the original and reversed strings
            isPalindrome = 0; // If any character doesn't match, set the flag to 0 (false)
            break; // Exit the loop if a mismatch is found
        }
    }

    // Check the flag and print the result
    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }
}

