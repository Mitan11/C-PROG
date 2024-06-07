/*
Write a Program to print the below Right Half Pyramid pattern using nested for loop.
A
B A
C B A
D C B A
E D C B A
*/

#include<stdio.h>

void main(){
    int n = 'E'; // Define the highest character in the pyramid ('E' in this case)

    // Outer loop to handle the number of rows, starting from 'A' to 'E'
    for(char i = 'A'; i <= n; i++){
        // Inner loop to print characters in each row, starting from current row character to 'A'
        for(char j = i; j >= 'A'; j--){
            printf("%c ", j); // Print the current character followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }
}
