/*
Write a program that converts a temperature in Fahrenheit to Celsius. 
The program should take the temperature in Fahrenheit as input from the user and print the temperature in Celsius.
*/

#include <stdio.h>

// Main function where the program starts execution
int main() {
    // Declare variables to store temperature in Fahrenheit and Celsius
    int fahrenheit, celsius;

    // Prompt the user to enter a temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");

    // Read the input from the user and store it in the fahrenheit variable
    scanf("%d", &fahrenheit);

    // Convert the temperature from Fahrenheit to Celsius using the formula celsius = (Fahrenheit - 32) * 5 / 9
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the result to the console
    printf("Temperature in Celsius: %d\n", celsius);

    // Return 0 to indicate successful execution of the program
    return 0;
}