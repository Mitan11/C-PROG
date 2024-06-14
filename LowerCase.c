/*
Write a Program to convert the given string in lowercase without using any string
function.
For example,
Input:
Enter any string: HELLO WORLD
Output:
Lowercase string: hello world
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[15]; // Declare an array to store the input string

    printf("Enter any String : ");
    scanf("%s",&str); // Read input string from user

    printf("String in UpperCase is %s",strlwr(str)); // Print the string converted to lowercase using strlwr()
}
