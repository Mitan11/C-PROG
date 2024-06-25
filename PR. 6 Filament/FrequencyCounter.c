/*
Q.2 Frequency Counter
Extend the program to count the frequency of each character in a given string.
Example:
Copyright © Red & White Education Pvt. Ltd. Page 2
Input: Enter any string: development
Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/

#include<stdio.h>

void main() {
    char str[50];

    // Prompt user to enter a string
    printf("Enter a String : ");
    scanf("%s", str);

    // Loop through each character of the string
    for(int i = 0; str[i] != '\0'; i++) {
        int len = 0; // Variable to count frequency
        // Compare the current character with every other character in the string
        for(int j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                len++; // Increment count if characters match
            }
        }
        // Print the character and its frequency
        printf("%c = %d\n", str[i], len);
    }
}
