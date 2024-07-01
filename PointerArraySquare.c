/*
Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7
Output:
Square of each element:
4, 16, 1, 9, 49
*/

#include<stdio.h>

void main() {
    int n; // Variable to store the size of the array
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of Array: ");
    scanf("%d", &n); // Read the size of the array from user input
    
    int arr[n]; // Declare an array of size 'n'

    // Prompt the user to enter the array elements
    printf("Enter Array elements:\n");
    for(int i = 0; i < n; i++) {
        // Prompt for and read each element of the array
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int *p; // Declare a pointer to an integer
    p = arr; // Assign the pointer to the first element of the array

    // Print the square of each element
    printf("Square of each element:\n");
    for(int i = 0; i < n; i++) {
        // Calculate the square of the current element using pointer arithmetic and print it
        printf("%d ", (*(p + i)) * (*(p + i)));
    }
}
