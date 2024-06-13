/*
Q.4 Sum of Elements in Row & Column of 2D Array
Develop a Program to print and find the sum of all elements of a given row & column from a 2D
array.
Example:
Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6
Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10
Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11
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

    int r, c, rowSum = 0, colSum = 0; // Variables to store row and column indices and their sums

    // Prompt the user to enter the row number to calculate the sum
    printf("Enter Row Number : ");
    scanf("%d", &r);

    // Print the elements in the specified row and calculate the sum of the row
    printf("Element in Row %d : ", r);
    for(int i = r; i == r; i++) { // Ensure we only process the specified row
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
            rowSum += arr[i][j]; // Add each element to the row sum
        }
    }
    printf("\nSum of Row is %d\n", rowSum);

    // Prompt the user to enter the column number to calculate the sum
    printf("Enter Column Number : ");
    scanf("%d", &c);

    // Print the elements in the specified column and calculate the sum of the column
    printf("Element in column %d : ", c);
    for(int i = 0; i < row; i++) { // Loop through all rows
        for (int j = c; j == c; j++) { // Ensure we only process the specified column
            printf("%d ", arr[i][j]);
            colSum += arr[i][j]; // Add each element to the column sum
        }
    }
    printf("\nSum of Column is %d", colSum);
}
