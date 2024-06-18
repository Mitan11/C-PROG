/*
Write a program in c to get the largest element of an array using the function
*/

#include<stdio.h>

// Function to find the maximum element in an array
void maxArray(int arr[], int n) {
    int max = arr[0]; // Initialize the maximum value with the first element of the array
    for(int i = 0; i < n; i++) { // Loop through the array elements
        if(arr[i] >= max) { // Check if the current element is greater than or equal to the current maximum
            max = arr[i]; // Update the maximum value
        }
    }
    // Print the maximum value found in the array
    printf("Maximum element in the Array is %d", max);
}

void main() {
    int n; // Declare a variable to store the size of the array

    // Prompt the user to enter the size of the array
    printf("Enter the size of the Array: ");
    scanf("%d", &n); // Read the size of the array from the user

    int arr[n]; // Declare an array of size 'n'

    // Prompt the user to enter the elements of the array
    printf("Enter elements for the Array\n");
    for(int i = 0; i < n; i++) { // Loop to read the elements of the array
        printf("arr[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }

    // Call the function to find the maximum element in the array
    maxArray(arr, n);
}
