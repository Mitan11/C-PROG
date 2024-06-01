/*
Q.1 Temperature Converter
Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
formula: °F = (°C × 9 / 5) + 32
Example:
Input: Enter temperature in Celsius : 38
Output: Equivalent temperature in Fahrenheit is 100.4
*/

#include <stdio.h>

void main() {
    // Declare variables for storing temperatures
    float f, c;
    // 'f' stands for Fahrenheit
    // 'c' stands for Celsius
    
    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius : ");
    
    /* Read the temperature entered by the user and store it in the variable 'c'
    The format specifier %f is used to read a float value */ 
    scanf("%f", &c);
    
    /* Convert the temperature from Celsius to Fahrenheit using the conversion formula
    The formula to convert Celsius to Fahrenheit is: Fahrenheit = (Celsius * 9 / 5) + 32 */
    f = c * 9 / 5 + 32;
    
    // Print the converted temperature in Fahrenheit
    printf("Equivalent temperature in Fahrenheit is %.2f\n", f);
    // The format specifier %.2f is used to print the float value with 2 decimal places
}
