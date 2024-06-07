/*
Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
loop.
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
*/

#include<stdio.h>

void main(){
    int n = 5; // number of rows in the pyramid

    // Outer loop for each row, starting from n and going down to 1
    for(int i = n; i >= 1; i--){
        // First inner loop to print spaces, number of spaces increases by 1 for each row
        for(int k = 1; k <= n-i; k++){
            printf(" "); // print a space
        }
        // Second inner loop to print numbers, prints 1 or 0 in an alternating pattern
        for(int j = 1; j <= i; j++){
            printf("%d", j%2); // print 1 if j is odd, 0 if j is even
        }
        // Move to the next line
        printf("\n");
    }
}
