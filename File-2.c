/*
Write a Program to create a new file and write all numbers that are divisible by both 3
and 5 between 1 and 50 into that file.
*/

#include <stdio.h>

void main() {
    // Declare a file pointer
    FILE *p;

    // Open the file "Divisible.txt" in write mode
    p = fopen("Divisible.txt", "w");

    // Loop through numbers from 1 to 50
    for (int i = 1; i <= 50; i++) {
        // Check if the number is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            // Write the number to the file
            fprintf(p, "%d\n", i);
        }
    }

    // Close the file
    fclose(p);
}
