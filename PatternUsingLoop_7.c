/*
Write a Program to print the below Right Half Pyramid pattern using nested for loop.
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>

void main(){
    int n = 5; // Number of rows in the pyramid

    // Outer loop to handle the number of rows
    for(int i = n; i >= 1; i--){
        // Inner loop to print numbers in increasing order from i to n
        for(int j = i; j <= n; j++){
            printf("%d ", j); // Print the current value of j followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
