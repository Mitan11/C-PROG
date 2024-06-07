/*
Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>

void main(){
    // Declare and initialize the number of rows
    int n = 5;
    
    // Outer loop to handle the number of rows, starting from n down to 1
    for(int i = n; i >= 1; i--){
        // First inner loop to print spaces, starting from 1 up to i-1
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        // Second inner loop to print numbers from i to n
        for(int j = i; j <= n; j++){
            printf("%d", j);
        }
        // Print a newline character to move to the next row
        printf("\n");
    }
}
