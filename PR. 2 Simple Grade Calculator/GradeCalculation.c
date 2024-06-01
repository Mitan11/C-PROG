/*
Problem Statements:

Step 1: Grade Calculation
Develop a program that takes a score out of 100 as input from the user and calculates the
corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.
Example:
Input: Enter your score: 92
Output: Your grade is A

Step 2: Additional Comments
Extend the program to provide additional comments based on the grade using a switch-case
statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.
Example:
Input: Enter your score: 92
Output: Your grade is A. Excellent work!

Step 3: Eligibility Check
Further, extend the program to check eligibility for the next level based on the grade using an
if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.
Example:
Input: Enter your score: 85
Output: Your grade is A. Excellent work! You are eligible for the next level.

*/

#include<stdio.h>

void main(){
    int score; // Declare a variable to store the user's score
    char grade; // Declare a variable to store the corresponding grade
    
    // Prompt the user to enter their score out of 100
    printf("Enter Your Score Out of 100 : ");
    
    // Read the score entered by the user and store it in the 'score' variable
    scanf("%d",&score);
    
    // Calculate grade based on the user's score
    if(score>=90 && score<=100){
        grade = 'A'; // Assign grade 'A' if the score is between 90 and 100
        printf("Your Grade is %c. ",grade); // Print the corresponding grade
    }
    else if(score>=80 && score<90){
        grade = 'B'; // Assign grade 'B' if the score is between 80 and 89
        printf("Your Grade is %c. ",grade); // Print the corresponding grade
    }
    else if(score>=70 && score<80){
        grade = 'C'; // Assign grade 'C' if the score is between 70 and 79
        printf("Your Grade is %c. ",grade); // Print the corresponding grade
    }
    else if(score>=60 && score<70){
        grade = 'D'; // Assign grade 'D' if the score is between 60 and 69
        printf("Your Grade is %c. ",grade); // Print the corresponding grade
    }
    else if(score>=0 && score<60){
        grade = 'F'; // Assign grade 'F' if the score is between 0 and 59
        printf("Your Grade is %c. ",grade); // Print the corresponding grade
    }
    else{
        printf("Score is not an integer or out of range"); // Print an error message for invalid score
        return; // Exit the program if the score is invalid
    }
    
    // Provide additional comments based on the grade using a switch-case statement
    switch(grade){
        case 'A':
            printf("Excellent work! "); // Print additional comment for grade 'A'
            break;
        case 'B':
            printf("Well done! "); // Print additional comment for grade 'B'
            break;
        case 'C':
            printf("Good job! "); // Print additional comment for grade 'C'
            break;
        case 'D':
            printf("You passed, but you could do better "); // Print additional comment for grade 'D'
            break;
        case 'F':
            printf("Sorry, you failed "); // Print additional comment for grade 'F'
            break;
        default:
            printf(""); // Default case, no additional comment
    }
    
    // Check eligibility for the next level based on the grade using if-else statements
    if(grade>='A' && grade<='D')
        printf("Congratulations! You are eligible for the next level"); // Print eligibility message for grades 'A' to 'D'
    else if(grade=='F')
        printf("Please try again next time"); // Print retry message for grade 'F'
}
