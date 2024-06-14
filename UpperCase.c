/*
Write a Program to convert the given string in uppercase without using any string
function.
For example,
Input:
Enter any string: hello world
Output:
Uppercase string: HELLO WORLD
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[15]; // Declare an array to store the input string

    printf("Enter any String : ");
    scanf("%s",&str); // Read input string from user

    printf("String in UpperCase is %s",strupr(str)); // Print the string converted to uppercase using strupr()
}
