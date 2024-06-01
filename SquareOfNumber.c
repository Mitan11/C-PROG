/*
Write a Program to find the square of a number and display it in a rectangular box.
For example,
Output:
- - - - - - - - -
|               |
| 5 x 5 = 25    |
|               |
- - - - - - - - -
*/

#include<stdio.h>

void main() {
    // Declare a variable to store the user's input number
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number entered by the user and store it in variable 'num'
    scanf("%d", &num);
    
    // Print the top border of the rectangular box
    printf("- - - - - - - - -\n");
    
    // Print an empty line inside the box for padding
    printf("|               |\n");
    
    // Print the square of the number in the center of the box
    // The format specifier %d is used to print the integer values of 'num' and its square
    printf("| %d x %d = %d  |\n", num, num, num * num);
    
    // Print another empty line inside the box for padding
    printf("|               |\n");
    
    // Print the bottom border of the rectangular box
    printf("- - - - - - - - -\n");
}
