/*
Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>

void main() {
    int i, j, k, n = 5; // Initialize variables i, j, k and n = 5 representing the number of rows

    // Outer loop for each row, starting from 5 down to 1
    for(i = 5; i >= 1; i--) {
        // First inner loop to print spaces, number of spaces decreases by 1 for each row
        for(int k = 1; k <= i; k++) {
            printf(" "); // print a space
        }
        // Second inner loop to print increasing numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j); // print the current number
        }
        // Third inner loop to print decreasing numbers from 5-1 to i
        for(j = 5-1; j >= i; j--) {
            printf("%d", j); // print the current number
        }
        // Move to the next line
        printf("\n");
    }
}
