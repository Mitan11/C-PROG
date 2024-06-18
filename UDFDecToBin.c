/*
Write a C program to convert Decimal number into Binary using function
*/ 

#include <stdio.h>

// Function to convert a decimal number to binary
void decToBinary(int n){
    // Array to store binary number
    int binaryNum[32];

    // Counter for binary array
    int i = 0;

    // Loop to convert the decimal number to binary
    while (n > 0) {
        // Storing remainder (0 or 1) in the binary array
        binaryNum[i] = n % 2;
        // Dividing the number by 2 for the next iteration
        n = n / 2;
        // Incrementing the counter
        i++;
    }

    // Printing the binary array in reverse order
    printf("Decimal number in binary is ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

// Main function to test the above function
void main(){
    int num; // Variable to store the decimal number

    // Prompting the user to enter a decimal number
    printf("Enter Decimal number: ");
    // Reading the decimal number from the user
    scanf("%d", &num);

    // Calling the function to convert the decimal number to binary
    decToBinary(num);
}
