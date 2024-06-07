/*
Write a Program to print the below pattern using nested for loop.
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<stdio.h>

void main() { /* Define the main function */
    int n = 5; /* Number of rows in the pattern */

    /* Upper half of the pattern */

    /* Outer loop for each row, starting from n to 1 */
    for(int i = n; i >= 1; i--) {
        /* First inner loop to print increasing numbers from 1 to i */
        for(int j = 1; j <= i; j++) {
            printf("%d", j); /* Print the current number */
        }
        printf("\n"); /* Move to the next line after completing each row */
    }

    /* Lower half of the pattern */

    /* Outer loop for each row, starting from 1 to n */
    for(int i = 1; i <= n; i++) {
        /* First inner loop to print increasing numbers from 1 to n-i+1 */
        for(int j = 1; j <= n - i + 1; j++) {
            printf("%d", j); /* Print the current number */
        }
        printf("\n"); /* Move to the next line after completing each row */
    }
}
