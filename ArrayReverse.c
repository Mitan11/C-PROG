/*
Write a program to reverse an array 
*/

#include<stdio.h>

void main(){
    int n; // Declare a variable for the size of the array

    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n); // Read the array size from the user
    
    int arr[n]; // Declare an array of size 'n'
    
    // Prompt the user to enter the elements of the array
    printf("Enter array elements\n");
    
    // Loop to read elements of the array
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }

    int temp; // Temporary variable for swapping
    int last = n - 1; // Variable to hold the index of the last element

    // Loop to reverse the array elements
    for(int i = 0; i < n / 2; i++){
        temp = arr[i]; // Store the current element in a temporary variable
        arr[i] = arr[last]; // Assign the value of the last element to the current element
        arr[last] = temp; // Assign the stored value to the last element
        last--; // Decrease the index of the last element
    }

    // Print the reversed array elements
    printf("Reversed Array Elements are\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]); // Print each element of the reversed array
    }
}
