/*
Write a Program to print 1 to 10 using a while loop.
For example,
Output:
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>

void main(){
    int i = 1; // Initialize a counter variable 'i' to 1
    // Loop through numbers from 1 to 10
    while (i <= 10){
        printf("%d\n", i); // Print the current value of 'i'
        i++; // Increment 'i' by 1 for the next iteration
    }
}
