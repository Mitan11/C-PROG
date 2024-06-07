/*
Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/

#include<stdio.h>

void main(){
    // Declare a variable to store the maximum number up to which the pattern will be printed
    int n = 45;

    // Outer loop to handle the number of rows
    for(int i = 41; i <= n; i++){
        // Inner loop to handle the numbers in each row
        for(int j = 41; j <= i; j++){
            // Print the current number
            printf("%d ", j);
        }
        // Print a newline character to move to the next row
        printf("\n");
    }
}
