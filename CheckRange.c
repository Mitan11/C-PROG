/*
Write a program that takes an integer as input from the user and check if the number is between 10 and 20. 
use logical operators to perform the check. print "In range" or "out of range" accordingly
*/

#include<stdio.h>

// Main function where the program starts execution
void main(){
    // Declare a variable 'num' to store the input number
    int num;

    // Prompt the user to enter a number
    printf("Enter Any Number : ");

    // Read the input from the user and store it in the num variable
    scanf("%d",&num);

    // Check if the number is between 10 and 20 using logical AND operator
    // The condition is true if num is greater than or equal to 10 AND less than or equal to 20
    if(num>=10 && num<=20){
        // If the condition is true, print "In Range"
        printf("In Range");
    }
    else{
        // If the condition is false, print "Out Of Range"
        printf("Out Of Range");
    }
}