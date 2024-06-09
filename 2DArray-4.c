/*
Write a Program to print and find the sum of all boundary elements from a given 5x5
2D array.
For example,
Input:
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[0][3] = 6
a[0][4] = 3
a[1][0] = 9
a[1][1] = 5
a[1][2] = 4
a[1][3] = 6
a[1][4] = 7
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
a[2][3] = 3
a[2][4] = 5
a[3][0] = 3
a[3][1] = 4
a[3][2] = 8
a[3][3] = 5
a[3][4] = 1
a[4][0] = 2
a[4][1] = 3
a[4][2] = 9
a[4][3] = 5
a[4][4] = 7
Output:
2 4 1 6 3
9       7
8       5
3       1
2 3 9 5 7
The sum of boundary elements of an Array: 75
*/

#include <stdio.h>

void main() {
    // Declare variables for the number of rows and columns, and for storing the sum
    int row, col, sum = 0; // Initialize sum to 0

    // Prompt the user to enter the number of rows
    printf("How many rows you want to enter : ");
    scanf("%d", &row); // Read the number of rows from the user

    // Prompt the user to enter the number of columns
    printf("How many columns you want to enter : ");
    scanf("%d", &col); // Read the number of columns from the user

    // Declare a 2D array with the specified number of rows and columns
    int arr[row][col];

    // Prompt the user to enter the elements of the 2D array
    printf("Enter elements for the 2D array\n");
    // Loop to read elements of the array
    for (int i = 0; i < row; i++) { // Outer loop for rows
        for (int j = 0; j < col; j++) { // Inner loop for columns
            // Prompt the user to enter the value for the current element
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]); // Read the value from the user
        }
    }

    // Print boundary elements and calculate their sum
    printf("Boundary elements are\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            // Check if the element is on the boundary
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                printf("%d ", arr[i][j]); // Print the boundary element
                sum += arr[i][j]; // Add the boundary element to the sum
            } else {
                printf("  "); // Print spaces for non-boundary elements
            }
        }
        printf("\n"); // Move to the next line after printing each row
    }

    // Print the sum of the boundary elements
    printf("The sum of boundary elements of the array is %d\n", sum);
}
