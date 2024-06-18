/*
Write a Program to find the sum of all 1D Array elements by passing an array as an
argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2
Output:
The sum of an Array: 18
*/

#include<stdio.h>

// Function to calculate the sum of the elements in the array
void arraySum(int arr[], int n){
    int sum = 0; // Initialize sum to 0

    // Loop through each element of the array
    for(int i = 0; i < n; i++){
        sum += arr[i]; // Add the current element to the sum
    }

    // Print the total sum of the array elements
    printf("The sum of Array is %d", sum);
}

void main(){
    int n; // Declare variable for the size of the array

    // Prompt the user to enter the size of the array
    printf("Enter the size of Array: ");
    scanf("%d", &n); // Read the size of the array from the user

    int arr[n]; // Declare an array of size 'n'

    // Prompt the user to enter the elements of the array
    printf("Enter Array Elements\n");
    // Loop to read elements of the array
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i); // Prompt the user to enter the value for the current index
        scanf("%d", &arr[i]); // Read the value for the current index from the user
    }

    // Call the function to calculate the sum of the array elements
    arraySum(arr, n);
}
