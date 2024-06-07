/*
Write a Program to print the below Right Half Pyramid pattern using nested for loop.
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/

#include<stdio.h>

void main(){
    int n = 5; // Number of rows in the pyramid

    // Outer loop to handle the number of rows
    for(int i = n; i >= 1; i--){
        // Inner loop to print the same number (i) repeatedly in each row
        for(int j = i; j <= n; j++){
            printf("%d ", i); // Print the current value of i followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
