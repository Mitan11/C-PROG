/*
Write a program to find the second maxinum element in an 2D Array
*/

#include<stdio.h>
#include<limits.h> // Include limits.h for INT_MIN

void main(){
    int firstMax = INT_MIN; // Initialize firstMax to the minimum integer value
    int secondMax = INT_MIN; // Initialize secondMax to the minimum integer value

    int r, c; // Declare variables for the number of rows and columns
    // Prompt the user to enter the number of rows
    printf("Enter Row: ");
    scanf("%d", &r); // Read the number of rows from the user
    // Prompt the user to enter the number of columns
    printf("Enter Column: ");
    scanf("%d", &c); // Read the number of columns from the user

    int arr[r][c]; // Declare a 2D array with the specified number of rows and columns
    // Prompt the user to enter the elements of the 2D array
    printf("Enter Array Elements \n");
    // Loop through each element of the 2D array to read the input
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            // Prompt the user to enter the value for the current element
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]); // Read the value from the user
        }
    }

    // Loop through each element of the 2D array to find the first and second maximum values
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] > firstMax){
                secondMax = firstMax; // Update secondMax before updating firstMax
                firstMax = arr[i][j]; // Update firstMax to the current element
            }
            else if(arr[i][j] > secondMax && arr[i][j] != firstMax){
                secondMax = arr[i][j]; // Update secondMax to the current element if it's less than firstMax
            }
        }
    }

    // Print the first and second maximum values
    printf("First max is %d\n", firstMax);
    printf("Second max is %d", secondMax);
}
