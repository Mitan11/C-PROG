/*
Write a Program to create a login mechanism by entering the right email & password.
You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456
Output:
Login Successful...
-----------------------------------------
For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456
Output:
Login Failed. Invalid Credentials.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char email[50], password[50]; // Declare arrays to store email and password
    
    // Prompt user to enter email and read input
    printf("Enter your email: ");
    scanf("%s",&email); // Using %s with scanf is risky, consider using fgets
    
    // Prompt user to enter password and read input
    printf("Enter your password: ");
    scanf("%s",&password); // Using %s with scanf is risky, consider using fgets
    
    // Check if email and password match predefined credentials
    if (strcmp(email, "admin@gmail.com") == 0 && strcmp(password, "123456") == 0) {
        printf("Login Successful...\n"); // Print message if credentials match
    } else {
        printf("Login Failed. Invalid Credentials.\n"); // Print message if credentials do not match
    }
    
    return 0; // Exit the program with success status
}
