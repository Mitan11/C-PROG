/*
Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
loop.
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/

#include<stdio.h>

#include<stdio.h>

void main(){
    int n = 5; // Define the number of rows in the pyramid
    for(int i = 1 ; i <= n ; i++){ // Outer loop for each row
        for(int j = n ; j >= i ; j--){ // Inner loop to print numbers
            printf("%d",j); // Print the current value of j
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
