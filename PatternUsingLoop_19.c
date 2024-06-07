/*
Write a Program to print the below Full Pyramid pattern using nested for loop.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

#include<stdio.h>

void main() {
    int i, j, k, n = 5; // Initialize variables i, j, k and n = 5 representing the number of rows

    // Outer loop for each row, starting from 1 up to n
    for(i = 1; i <= n; i++) {
        // First inner loop to print spaces, number of spaces decreases by 1 for each row
        for(k = 1; k <= n-i; k++) {
            printf("  "); // print two spaces to align the asterisks
        }
        // Second inner loop to print increasing asterisks from 1 to i
        for(j = 1; j <= 2*i-1; j++) {
            printf("* "); // print an asterisk followed by a space
        }
        // Move to the next line
        printf("\n");
    }
}
