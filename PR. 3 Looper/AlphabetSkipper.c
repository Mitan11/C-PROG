/*
Q.1 Alphabet Skipper: 
Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.

Example:
Output: a, e, i, m, q, u, y
*/ 

#include<stdio.h>

void main(){
    char str = 'a'; // Initialize variable 'str' with the character 'a'
    
    // Execute the loop at least once and then check the condition
    do{
        printf("%c %d\n", str, str); // Print the current character and its ASCII value
        str += 4; // Increment the character by 4 (skip 3 alphabets)
    }while(str <= 'z'); // Continue the loop until 'str' is less than or equal to 'z'
} 
