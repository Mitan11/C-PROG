/*
Write a Program to print the below Inverted Right Half Pyramid pattern using nested
for loop.
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/

#include<stdio.h>

void main(){
    int n = 5; // Number of rows in the pyramid

    // Outer loop to handle the number of rows
    for(int i = n; i >= 1; i--){
        // Inner loop to print numbers in each row
        for(int j = 1; j <= i; j++){
            printf("%d ", j % 2); // Print 1 if j is odd, 0 if j is even, followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
