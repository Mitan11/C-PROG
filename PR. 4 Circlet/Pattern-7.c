/*
Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.

* * * * *
*       *
* * * * *
*
*

*/

#include<stdio.h>

void main() {
    int n = 5; // Number of rows for the pattern

    // Outer loop to handle the number of rows
    for(int i = 1; i <= n; i++) {
        // Condition to print full row
        if (i == 1 || i == 3) { 
            for(int j = 1; j <= n; j++) {
                printf("* "); // Print stars in the 1st and 3rd rows
            }
        } else if (i == 2) { // Condition to print the second row with spaces
            printf("* "); // Print the first star
            for(int j = 1; j <= n - 2; j++) {
                printf("  "); // Print spaces
            }
            printf("*"); // Print the last star
        } else { // Condition to print a single star for the remaining rows
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
}
