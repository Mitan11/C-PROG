/*
Write a Program to print the below Right Half Pyramid pattern using nested for loop.
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include<stdio.h>

void main() {
    int n = 5; // Number of rows in the pyramid

    // Outer loop to handle the number of rows
    for(int i = 1; i <= n; i++) {
        // Inner loop to print numbers in decreasing order from i to 1
        for(int j = i ; j >= 1 ; j--) {
            printf("%d ", j); // Print the current value of j followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
