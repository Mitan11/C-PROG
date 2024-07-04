/*
Q.2 Cubes Generator
Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
Example:
Input:
Enter array's size: 2
Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4
Output:
Cubes of all elements:
9 4
25 64
*/

#include <stdio.h>

// Function to compute the cubes of all elements in a 2D array
void cube(int *p , int row , int col) {
    printf("Cubes of all elements:\n");
    // Iterate through each element of the 2D array using pointers
    for(int i = 0; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            // Compute the cube of the element and print it
            int element = *(p + i * col + j);
            printf("%d ", element * element * element);
        }
        printf("\n"); // New line after each row
    }
}

void main() {
    int row, col;

    // Prompt the user to enter the number of rows
    printf("How many rows do you want to enter: ");
    scanf("%d", &row); // Read the number of rows from the user

    // Prompt the user to enter the number of columns
    printf("How many columns do you want to enter: ");
    scanf("%d", &col); // Read the number of columns from the user

    // Declare a 2D array with the specified number of rows and columns
    int arr[row][col];

    // Prompt the user to enter the elements for the array
    printf("Enter the elements for the array:\n");
    // Loop through each element of the array to read the input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            // Prompt the user to enter the value for the current element
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]); // Read the value from the user
        }
    }

    // Call the function to compute and print the cubes of the elements
    cube((int *)arr, row, col);
}
