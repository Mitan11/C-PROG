/*
Q.1 Negative Elements in 1D Array
Develop a program that finds all the negative elements from a given 1D array.
Example:
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Output:
Negative elements from an Array: -4, -3, -5
*/

#include <stdio.h>

void main() {
    // Declare a variable to store the size of the array
    int n;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n); // Read the size of the array from the user
    
    // Declare an array of size 'n'
    int arr[n];
    
    // Prompt the user to enter the elements of the array
    printf("Enter array elements\n");
    
    // Loop to read elements of the array
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }
    
    // Print the message indicating that the negative elements will be listed
    printf("Negative elements from the array:\n");
    
    // Loop through the array to find and print negative elements
    for(int i = 0; i < n; i++) {
        // Check if the current element is negative
        if(arr[i] < 0) {
            // Print the negative element
            printf("%d\n", arr[i]);
        }
    }
}
