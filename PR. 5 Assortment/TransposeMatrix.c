/*
Q.3 Transpose of 2D Array
Develop a Program to find the transpose matrix of a given 2D array.
Example:
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
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6
*/

#include<stdio.h>

void main() {
    int row, col; // Declare variables for the number of rows and columns

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

    // Loop through each element of the 2D array to read the input
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            // Prompt the user to enter the value for the current element
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]); // Read the value from the user
        }
    }

    // Print the transpose matrix of the array
    printf("Transpose Matrix of an Array\n");
    for(int i = 0; i < col; i++) { // Outer loop for columns (original rows become columns)
        for(int j = 0; j < row; j++) { // Inner loop for rows (original columns become rows)
            printf("%d ", arr[j][i]); // Print the element at position [j][i] of the original array
        }
        printf("\n"); // Move to the next line after printing each row of the transpose matrix
    }
}
