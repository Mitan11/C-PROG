/*
Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3
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
Average of an Array: 3.88
*/

#include<stdio.h>

void main(){
    int row, col; // Declare variables for the number of rows and columns
    float avg = 0; // Initialize the variable to store the sum of the array elements

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
            avg += arr[i][j]; // Add the value to the sum
        }
    }

    // Calculate the average by dividing the sum by the total number of elements
    avg /= (row * col);

    // Print the average of the array elements
    printf("Average of the array is %.2f\n", avg); // Print the average with two decimal places
}
