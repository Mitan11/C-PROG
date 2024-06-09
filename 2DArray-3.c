/*
Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
Output:
The sum of diagonal elements of an Array: 13
*/

#include <stdio.h>

void main() {
    // Declare variables for the number of rows and columns, and for storing the sum
    int row, col, sum = 0; // Initialize sum to 0

    // Prompt the user to enter the number of rows
    printf("How many rows do you want to enter : ");
    scanf("%d", &row); // Read the number of rows from the user

    // Prompt the user to enter the number of columns
    printf("How many columns do you want to enter : ");
    scanf("%d", &col); // Read the number of columns from the user

    // Declare a 2D array with the specified number of rows and columns
    int arr[row][col];

    // Prompt the user to enter the elements of the 2D array
    printf("Enter elements for the 2D array\n");
    // Loop to read elements of the array
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            // Prompt the user to enter the value for the current element
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]); // Read the value from the user
        }
    }

    // Calculate the sum of diagonal elements
    for(int i = 0; i < row; i++) {
        sum += arr[i][i]; // Add the element at the [i][i] position to the sum
    }

    // Print the sum of the diagonal elements
    printf("The sum of diagonal elements of the array is %d", sum);
}
