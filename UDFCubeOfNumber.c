/*
Write a Program to find the cube of a given number using UDF.
For example,
Input:
Enter any number: 5
Output:
Cube is: 125
*/

#include<stdio.h>

// Function to calculate the cube of a given number
int cube(int num){
    return num * num * num; // Return the cube of the input number
}

void main(){
    int num; // Declare a variable to store the input number

    // Prompt the user to enter a number
    printf("Enter any number: ");
    scanf("%d", &num); // Read the input number from the user

    // Call the cube function and store the result in 'ans'
    int ans = cube(num);

    // Print the result
    printf("Cube of %d is %d", num, ans);
}
