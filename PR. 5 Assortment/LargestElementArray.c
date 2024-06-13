/*
Q.2 Largest Element in 2D Array
Develop a Program to find the largest element from a given 2D array.
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
The largest element is: 9
*/

#include<stdio.h>

void main(){
    int row, col; // Declare variables to store the number of rows and columns

    // Prompt the user to enter the number of rows
    printf("How many rows you want to enter: ");
    scanf("%d", &row); // Read the number of rows from the user

    // Prompt the user to enter the number of columns
    printf("How many columns you want to enter: ");
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

    // Initialize a variable to store the largest element
    // Start with the smallest possible integer value
    int max = arr[0][0]; // Initialize max with the first element of the array

    // Loop through each element of the 2D array to find the largest element
    for(int i = 0; i < row; i++) { // Outer loop for rows
        for(int j = 0; j < col; j++) { // Inner loop for columns
            // If the current element is greater than the current max value
            if(arr[i][j] > max) {
                max = arr[i][j]; // Update the max value with the current element
            }
        }
    }

    // Print the largest element found in the 2D array
    printf("The Largest Element is %d", max);
}
