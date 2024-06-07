/*
Write a Program to find the length of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6
Output:
Length of an Array: 5
*/

#include <stdio.h>

void main() {
    // Declare variables
    int n; // 'n' for array size
    printf("Enter the size of array : ");
    scanf("%d", &n); // Read array size from user
    
    int arr[n]; // Declare an array of size 'n'
    
    printf("Enter array elements\n");
    // Loop to read elements of the array
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }
    
    // Output the length of the array
    printf("Length of an Array is %d", sizeof(arr) / sizeof(arr[0])); // Calculate and print the length of the array
}
