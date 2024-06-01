/*
Write a program that takes a year as input from the user and check if it is a leap year. A leap year is divisible by 4 but not by 100 unless it is divisible by 400.
*/

#include<stdio.h>

// Main function where the program starts execution
void main(){
    // Declare a variable to store the year
    int year;

    // Prompt the user to enter the year
    printf("Enter year : ");

    // Read the input from the user and store it in the year variable
    scanf("%d",&year);

    // Check if the year is divisible by 4
    if(year % 4 == 0){
        // If the year is divisible by 4, check if it is also divisible by 100
        if(year % 100 == 0){
            // If the year is divisible by 100, check if it is also divisible by 400
            if(year % 400 == 0){
                // If the year is divisible by 400, it is a leap year
                printf("It is an Leap Year");
            }
            else{
                // If the year is not divisible by 400, it is not a leap year
                printf("Not a Leap Year");
            }
        }
        else{
            // If the year is not divisible by 100, it is a leap year
            printf("It is an Leap Year");
        }
    }
    else{
        // If the year is not divisible by 4, it is not a leap year
        printf("Not a Leap Year");
    }
}