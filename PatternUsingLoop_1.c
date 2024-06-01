/*
Write a Program to print the below Left Half Pyramid pattern using nested for loop.
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

#include<stdio.h>

void main(){ /* define the main function */
    int n = 5; /* number of rows in the pyramid */

    for(int i = 1 ; i <= n ; i++){ /* outer loop for each row */
        for(int k = 1; k <= n-i ; k++){ /* inner loop to print spaces */
            printf(" "); /* print a space */
        }
        for(int j = i ; j >= 1 ; j--){ /* inner loop to print numbers */
            printf("%d",j); /* print the number */
        }
        printf("\n"); /* move to the next line */
    }
}