/*
Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
loop.
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/

#include<stdio.h>

void main(){
    int n = 5; // number of rows in the pyramid

    for(int i = n ; i >= 1 ; i--){ // outer loop for each row, starting from n and going down to 1
        for(int k = 1 ; k <= n-i ; k++){ // inner loop to print spaces, number of spaces increases by 1 for each row
            printf(" "); // print a space
        }
        for(int j = i; j >= 1 ; j--){ // inner loop to print numbers, prints 1 or 0 in an alternating pattern
            printf("%d",j%2); // print 1 if j is odd, 0 if j is even
        }
        printf("\n"); // move to the next line
    }
}