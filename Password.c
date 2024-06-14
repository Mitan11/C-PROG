/*
Write a Program to check if a given password is strong or not by satisfying the below
criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.
For example,
Input:
Create your password: Admin@123
Output:
Your password is Strong.
-----------------------------------------
For example,
Input:
Create your password: hello#89
Output:
Your password is not Strong.
*/

#include <stdio.h>
#include <string.h>

void main() {
    char pass[100];  // Declare a character array to store the password
    int i = 0;

    // Prompt the user to create a password
    printf("Create your password: ");
    scanf("%s", pass);  // Read the password from the user (Note: this stops at whitespace)

    int strSize = strlen(pass);  // Calculate the length of the password
    int charLett = 0, dig = 0, spcChar = 0;  // Initialize flags for the password criteria

    // Check if the password is at least 6 characters long
    if (strSize >= 6) {
        // Loop through each character of the password
        while (pass[i] != '\0') {
            // Check if the character is a letter
            if ((pass[i] >= 'A' && pass[i] <= 'Z') || (pass[i] >= 'a' && pass[i] <= 'z')) {
                charLett = 1;
            }
            // Check if the character is a digit
            else if (pass[i] >= '0' && pass[i] <= '9') {
                dig = 1;
            }
            // If it's not a letter or digit, consider it a special character
            else {
                spcChar = 1;
            }
            i++;  // Move to the next character
        }

        // Check if all criteria are met
        if (charLett && dig && spcChar) {
            printf("Your password is Strong.\n");
        } else {
            printf("Your password is not Strong.\n");
        }
    } else {
        // If the password is not at least 6 characters long, print an error message
        printf("Password must be at least 6 characters.\n");
    }
}
