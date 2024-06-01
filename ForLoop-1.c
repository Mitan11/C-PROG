/*
Write a Program to print 10 to 1 using a for loop.
For example,
Output:
10 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>

void main(){
    // Initialize loop variable i to start from 10
    // Loop from 10 down to 1
    for(int i = 10; i >= 1; i--){
        // Print the current value of i followed by a new line
        printf("%d\n", i);
    }
}
