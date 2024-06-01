/*
Write a Program to print the given pattern.
- - - - - - - -
|             |
R             |
N             |
W             |
|             |
- - - - - - - -

*/

#include<stdio.h>

void main(){
    // Print the top border of the pattern
    printf("----------\n");
    
    // Print the first row with vertical bars and spaces
    printf("|        |\n");
    
    // Print the rows with characters 'R', 'N', and 'W' followed by spaces and a vertical bar
    printf("R        |\n");
    printf("N        |\n");
    printf("W        |\n");
    
    // Print another row with vertical bars and spaces
    printf("|        |\n");
    
    // Print the bottom border of the pattern
    printf("----------");
}
