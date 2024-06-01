/*
Write a Program to find an average mark from a total of three subject marks of a
student. Each subject’s marks must be given out of 100.
For example,
Input:
Enter maths marks: 90
Enter english marks: 82
Enter science marks: 78
Output:
Average mark: 83.33

*/

#include<stdio.h>

void main(){
    // Declare variables to store marks in three subjects and average marks
    float math_marks, english_marks, science_marks, average_marks;
    
    // Prompt the user to enter marks for each subject
    printf("Enter Maths Marks out of 100 : ");
    // Read the marks entered by the user for Maths and store them in 'math_marks'
    scanf("%f", &math_marks);
    
    printf("Enter English Marks out of 100 : ");
    // Read the marks entered by the user for English and store them in 'english_marks'
    scanf("%f", &english_marks);
    
    printf("Enter Science Marks out of 100 : ");
    // Read the marks entered by the user for Science and store them in 'science_marks'
    scanf("%f", &science_marks);
    
    // Calculate the average marks by adding the marks of all three subjects and dividing by 3
    average_marks = (math_marks + english_marks + science_marks) / 3;
    
    // Print the average marks
    printf("Average Marks is %.2f", average_marks);
}
