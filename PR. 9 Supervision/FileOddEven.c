/*
Q.1 File Handling
Develop a program that writes even & odd numbers from 50 to 70 into two separate files.
Example:
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include <stdio.h>

void main() {
    // File pointers to handle even and odd files
    FILE *EVEN;
    FILE *ODD;

    // Open the file "Even.txt" in write mode
    EVEN = fopen("Even.txt", "w");
    // Open the file "Odd.txt" in write mode
    ODD = fopen("Odd.txt", "w");

    // Loop through numbers from 50 to 70
    for (int i = 50; i <= 70; i++) {
        // Check if the number is even
        if (i % 2 == 0)
            // Write the even number to "Even.txt"
            fprintf(EVEN, "%d\n", i);
        else
            // Write the odd number to "Odd.txt"
            fprintf(ODD, "%d\n", i);
    }

    // Close the files to save the data
    fclose(EVEN);
    fclose(ODD);
}
