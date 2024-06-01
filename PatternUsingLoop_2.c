/*
Write a Program to print the below Left Half Pyramid pattern using nested for loop.
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>

void main(){
    int n = 5; // number of rows in the pyramid

    for(int i = n ; i >= 1 ; i--){ // outer loop for each row, starting from n and going down to 1
        for(int k = 1 ; k <= n-i+1 ; k++){ // inner loop to print spaces, number of spaces decreases by 1 for each row
            printf(" "); // print a space
        }
        for(int j = i ; j <= n ; j++){ // inner loop to print numbers, starting from i and going up to n
            printf("%d",j); // print the number
        }
        printf("\n"); // move to the next line
    }
}