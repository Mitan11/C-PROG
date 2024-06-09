/*
Write a Program to perform the addition operation of two 2D arrays & store it in
another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array A's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
Enter array B's elements:
b[0][0] = 3
b[0][1] = 6
b[0][2] = 2
b[1][0] = 5
b[1][1] = 6
b[1][2] = 8
b[2][0] = 3
b[2][1] = 7
b[2][2] = 4
Output:
Array C is:
5 10 3
8 11 12
11 9 10
*/

#include <stdio.h>

void main() {
    // Declare variables for the number of rows and columns
    int row, col;

    // Prompt the user to enter the number of rows
    printf("How many rows do you want to enter : ");
    scanf("%d", &row); // Read the number of rows from the user

    // Prompt the user to enter the number of columns
    printf("How many columns do you want to enter : ");
    scanf("%d", &col); // Read the number of columns from the user

    // Declare three 2D arrays: A, B, and C with the specified number of rows and columns
    int a[row][col];
    int b[row][col];
    int c[row][col];

    // Prompt the user to enter the elements for array A
    printf("Enter the elements for array 'A'\n");
    // Loop through each element of array A to read the input
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            // Prompt the user to enter the value for the current element of array A
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]); // Read the value from the user
        }
    }

    // Prompt the user to enter the elements for array B
    printf("Enter the elements for array 'B'\n");
    // Loop through each element of array B to read the input
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            // Prompt the user to enter the value for the current element of array B
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]); // Read the value from the user
        }
    }

    // Perform the addition of corresponding elements of arrays A and B, and store the result in array C
    printf("Array 'C' is\n");
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            c[i][j] = a[i][j] + b[i][j]; // Add the corresponding elements of arrays A and B, and store the result in array C
            printf("%d ", c[i][j]); // Print the current element of array C
        }
        printf("\n"); // Move to the next line after printing each row of array C
    }
}
