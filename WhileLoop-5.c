/*
Write a Program to print leap years between two given numbers using a while loop.
For example,
Input:
Enter the first number: 2020
Enter the second number: 2040
Output:
2020, 2024, 2028, 2032, 2036, 2040
*/

#include <stdio.h>

void main(){
    int year1, year2; // Declare variables to store the input years
    printf("Enter a year 1 : "); // Prompt the user to enter the first year
    scanf("%d", &year1); // Read the first year from the user and store it in 'year1'
    printf("Enter a year 2 : "); // Prompt the user to enter the second year
    scanf("%d", &year2); // Read the second year from the user and store it in 'year2'
    int i = 1; // Initialize a loop counter (not used in the program)
    // Loop through the years from 'year1' to 'year2'
    while (year1 <= year2){
        // Check if the current year is divisible by 4
        if (year1 % 4 == 0){
            // Check if the year is divisible by 100
            if (year1 % 100 == 0){
                // Check if the year is divisible by 400
                if (year1 % 400 == 0){
                    printf("%d\n", year1); // If divisible by 400, it's a leap year, so print it
                }
            }
            else{
                printf("%d\n", year1); // If divisible by 4 but not by 100, it's a leap year, so print it
            }
        }
        year1++; // Move to the next year
    }
}
