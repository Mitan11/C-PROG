/*
Write a Program to read content from one file and write it to another file.
*/

#include <stdio.h>

void main() {
    // Declare a file pointer and a character array to store the input string
    FILE *p;
    char str[50];

    // Prompt the user to enter a string
    printf("Enter a String: ");
    scanf("%s", str);  // Read the input string

    // Open the file 'first.txt' in write mode
    p = fopen("first.txt", "w");

    // Write the input string to 'first.txt'
    fprintf(p, "%s", str);
    fclose(p);  // Close the file

    // Declare another file pointer for copying content
    FILE *p2;
    // Open 'first.txt' in read mode
    p = fopen("first.txt", "r");
    // Open 'copy.txt' in write mode
    p2 = fopen("copy.txt", "w");

    // Declare another character array to store the string read from the file
    char st[50];
    // Read the content of 'first.txt' and write it to 'copy.txt'
    while (fscanf(p, "%s", st) != EOF) {
        fprintf(p2, "%s", st);
    }

    // Close both files
    fclose(p);
    fclose(p2);
}
