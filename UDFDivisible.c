/*
Write a Program to check if a given number is divisible by both 3 & 5 or not using
UDF.
For example,
Input:
Enter any number: 15
Output:
The given number is divisible by both 3 & 5.
------------------------------------------
For example,
Input:
Enter any number: 10
Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

// Function to check if a number is divisible by both 3 and 5
void Divisible(int num){
    if(num % 3 == 0 && num % 5 == 0){ // Check if 'num' is divisible by both 3 and 5
        printf("The given number is divisible by 3 & 5 both");
    }
    else{
        printf("The given number is not divisible by 3 & 5 both");
    }
}

void main(){
    int num; // Declare a variable to store the input number

    // Prompt the user to enter a number
    printf("Enter any number: ");
    scanf("%d", &num); // Read the input number from the user

    // Call the Divisible function to check divisibility
    Divisible(num);
}
