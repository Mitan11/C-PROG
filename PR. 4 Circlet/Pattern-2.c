/*
Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
11
12 13
14 15 16
17 18 19 20
*/

#include<stdio.h>

void main(){
    // Declare and initialize the number of rows and the starting number
    int n = 4, k = 11;

    // Outer loop to handle the number of rows
    for(int i = 1; i <= n; i++){
        // Inner loop to handle the number of columns in each row
        for(int j = 1; j <= i; j++){
            // Print the current number and then increment it
            printf("%d ", k++);
        }
        // Print a newline character to move to the next row
        printf("\n");
    }
}
