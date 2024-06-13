/*
Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

For the first 50 units Rs. 0.50/unit

For the next 100 units Rs. 0.75/unit

For the next 100 units Rs. 1.20/unit

For units above 250 Rs. 1.50/unit

An additional surcharge of 20% is added to the bill.

For example,

Input:

Enter electricity units: 435

Output:

Electricity Bill = Rs. 597.00
*/

#include <stdio.h>

int main() {
    // Declare variables to store the number of units and the bill amount
    int units;
    float bill = 0.0;

    // Prompt the user to enter the number of electricity units
    printf("Enter electricity units: ");
    scanf("%d", &units); // Read the number of units from the user

    // Calculate the bill based on the number of units using the given conditions
    if (units <= 50) {
        // If the units are less than or equal to 50, the rate is Rs. 0.50/unit
        bill = units * 0.50;
    } else if (units <= 150) {
        // If the units are between 51 and 150, the first 50 units are charged at Rs. 0.50/unit
        // and the remaining units are charged at Rs. 0.75/unit
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        // If the units are between 151 and 250, the first 50 units are charged at Rs. 0.50/unit,
        // the next 100 units are charged at Rs. 0.75/unit,
        // and the remaining units are charged at Rs. 1.20/unit
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        // If the units are above 250, the first 50 units are charged at Rs. 0.50/unit,
        // the next 100 units are charged at Rs. 0.75/unit,
        // the next 100 units are charged at Rs. 1.20/unit,
        // and the remaining units are charged at Rs. 1.50/unit
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add a 20% surcharge to the calculated bill
    bill += bill * 0.20;

    // Print the total electricity bill
    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0; // Indicate that the program ended successfully
}
