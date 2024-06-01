/*
Write a program that takes a student's marks as input from the user and print their grade based on the following criteria:
marks greater than or equal to 90:A
marks between 80 and 89:B
marks between 70 and 79:C
marks between 60 and 69:D
marks less than 60:F
*/

#include<stdio.h>

// Main function where the program starts execution
void main(){
    // Declare a variable to store the student's marks
    int mark;

    // Prompt the user to enter the student's marks
    printf("Enter Marks : ");

    // Read the input from the user and store it in the mark variable
    scanf("%d",&mark);

    // Check if the student's marks are greater than or equal to 90
    if(mark >= 90 && mark <= 100){
        // If the condition is true, print the grade A
        printf("Your Grade is A");
    }

    // Check if the student's marks are between 80 and 89
    else if(mark >= 80 && mark < 90){
        // If the condition is true, print the grade B
        printf("Your Grade is B");
    }

    // Check if the student's marks are between 70 and 79
    else if(mark >= 70 && mark < 80){
        // If the condition is true, print the grade C
        printf("Your Grade is C");
    }

    // Check if the student's marks are between 60 and 69
    else if(mark >= 60 && mark < 70){
        // If the condition is true, print the grade D
        printf("Your Grade is D");
    }

    // Check if the student's marks are less than 60
    else if(mark >= 0 && mark < 60){
        // If the condition is true, print the grade F
        printf("Your Grade is F");
    }

    // Check if the student's marks are not a valid integer or out of range
    else{
        // If the condition is true, print an error message
        printf("Marks is not a Integer or Out of Range");
    }
}