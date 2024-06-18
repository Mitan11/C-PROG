/*
Write a program in c to check if a given number is even or odd using the function
*/

#include<stdio.h>

// Function to check if a number is odd or even
void oddEven(int num){
    if(num % 2 == 0){ // Check if the number is divisible by 2
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}

void main(){
    int num; // Declare a variable to store the input number

    // Prompt the user to enter a number
    printf("Enter any number: ");
    scanf("%d", &num); // Read the input number from the user

    // Call the oddEven function to check if the number is odd or even
    oddEven(num);
}
