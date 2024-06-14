/*
Write a Program to convert the given string in toggle case without using any string
function.
For example,
Input:
Enter any string: HelLo worLD
Output:
Toggle case string: hELlO WORld
*/

#include<stdio.h>

void main() {
    char str[100];  // Increase the array size to handle larger input strings
    int i = 0;

    printf("Enter any String : ");
    fgets(str, sizeof(str), stdin);  // Read input with spaces using fgets

    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;  // Convert uppercase to lowercase
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;  // Convert lowercase to uppercase
        }
        i++;
    }

    printf("ToggleCase String is %s", str);
}
