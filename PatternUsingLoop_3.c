/*
Write a Program to print the below Left Half Pyramid pattern using nested for loop.
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/

#include<stdio.h>

void main(){
    int n = 5; // number of rows in the pyramid

    for(int i = n; i >= 1 ; i--){ // outer loop for each row, starting from n and going down to 1
        for(int k = 1 ; k <= n-i+1 ; k++){ // inner loop to print spaces, number of spaces decreases by 1 for each row
            printf(" "); // print a space
        }
        for(int j = i ; j >= 1 ; j--){ // inner loop to print numbers, prints the value of i
            printf("%d",i); // print the number, which is the value of i
        }
        printf("\n"); // move to the next line
    }
}