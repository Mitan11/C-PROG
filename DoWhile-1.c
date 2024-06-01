/*
Write a Program to print 1 to 10 using a do-while loop.
For example,
Output:
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>

void main(){
    int i = 1; // Initialize a variable to start from 1
    do{
        printf("%d\n", i); // Print the current value of i
        i++; // Increment i by 1
    }while(i <= 10); // Continue the loop while i is less than or equal to 10
}
