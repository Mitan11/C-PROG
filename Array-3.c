/*
Write a Program to perform the addition operation of two 1D arrays & store it in
another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter array size: 5
Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2
Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3
Output:
Array C is: 8, 7, 10, 12, 5
*/

#include <stdio.h>

void main() {
    // Declare variables
    int n; // 'n' for array size
    printf("Enter the size of array A and B : ");
    scanf("%d", &n); // Read array size from user
    
    int a[n]; // Declare an array A of size 'n'
    int b[n]; // Declare an array B of size 'n'
    int c[n]; // Declare an array C of size 'n' to store the result of addition
    
    printf("Enter the elements for array 'A'\n");
    // Loop to read elements of array A
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i); // Prompt the user to enter the value for the current index of array A
        scanf("%d", &a[i]); // Read the value for the current index of array A from the user
    }

    printf("Enter the elements for array 'B'\n");
    // Loop to read elements of array B
    for(int i = 0; i < n; i++) {
        printf("b[%d] = ", i); // Prompt the user to enter the value for the current index of array B
        scanf("%d", &b[i]); // Read the value for the current index of array B from the user
    }

    printf("Array 'C' is ");
    // Loop to add corresponding elements of arrays A and B and store the result in array C
    for(int i = 0 ; i < n ; i++){
        c[i] = a[i] + b[i]; // Add the corresponding elements of arrays A and B and store the result in array C
        printf("%d ", c[i]); // Print the value of array C for the current index
    }
}
