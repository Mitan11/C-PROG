/*
Write a Program to print 10 to 1 using a while loop.
For example,
Output:
10 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>

void main(){
    int i = 10; // Initialize a counter variable 'i' to 10
    // Loop through numbers from 10 to 1
    while (i >= 1){
        printf("%d\n", i); // Print the current value of 'i'
        i--; // Decrement 'i' by 1 for the next iteration
    }
}
