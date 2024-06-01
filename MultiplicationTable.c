/*
Write a Program to print the multiplication table of the number N using any type of loop.
For example,
Input:
Enter any number: 5
Output:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
*/

#include<stdio.h>

void main(){
    // Declare variables
    int n;
    
    // Prompt the user to enter a number
    printf("Enter a number whose multiplication table you want : ");
    // Read the input number
    scanf("%d",&n);
    
    // Iterate from 1 to 10 to print the multiplication table
    for(int i = 1; i <= 10; i++){
        // Print the multiplication table
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
