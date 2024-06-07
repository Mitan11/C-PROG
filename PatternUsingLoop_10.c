/*
Write a Program to print the below Inverted Right Half Pyramid pattern using nested
for loop.
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/

#include<stdio.h>

void main(){
    int n = 5; // Number of rows in the pyramid

    // Outer loop to handle the number of rows
    for(int i = 1 ; i <= n ; i++){
        // Inner loop to print numbers in each row
        for(int j = i ; j <= n ; j++){
            printf("%d ", i); // Print the current value of i followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
