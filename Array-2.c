/*
Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26
Output:
Average of an Array: 29.6
*/

#include <stdio.h>

void main() {
    // Declare variables
    int n; // 'n' for array size
    float avg = 0; // 'avg' to store the average value, initialize to 0
    printf("Enter the size of array : ");
    scanf("%d", &n); // Read array size from user
    
    int arr[n]; // Declare an array of size 'n'
    
    printf("Enter array elements\n");
    // Loop to read elements of the array
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }

    // Loop to calculate the sum of array elements
    for(int i = 0; i < n; i++) {
        avg += arr[i]; // Add each element to the sum
    }
    avg /= n; // Calculate the average by dividing the sum by the number of elements
    
    printf("Average of an Array is %.1f", avg); // Print the average value
}
