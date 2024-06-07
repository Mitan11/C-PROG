/*
Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>

void main() { /* Define the main function */
    int n = 5; /* Number of rows in the pattern */

    /* Outer loop for each row, starting from 1 to n */
    for(int i = 1; i <= n; i++) {
        /* First inner loop to print increasing numbers from 1 to i */
        for(int j = 1; j <= i; j++) {
            printf("%d", j); /* Print the current number */
        }

        /* Second inner loop to print spaces, two spaces for each remaining row */
        for(int k = 1; k <= n - i; k++) {
            printf(" "); /* Print a space */
        }
        
        /* Third inner loop to print spaces, two spaces for each remaining row */
        for(int k = 1; k <= n - i; k++) {
            printf(" "); /* Print a space */
        }

        /* Fourth inner loop to print decreasing numbers from i to 1 */
        for(int j = i; j >= 1; j--) {
            printf("%d", j); /* Print the current number */
        }

        /* Move to the next line after completing the current row */
        printf("\n");
    }
}
