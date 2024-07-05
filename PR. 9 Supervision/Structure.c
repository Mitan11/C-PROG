/*
Q.2 Structures and Percentage Calculation

Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
student.
*/

#include <stdio.h>

// Define the structure to hold student details
struct Structure {
    int rollNo;          // Roll number of the student
    char name[100];      // Name of the student
    int chemMarks;       // Marks in Chemistry
    int mathsMarks;      // Marks in Mathematics
    int phyMarks;        // Marks in Physics
}s[5];                   // Array of 5 student structures

void main() {
    // Loop to input details of 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter details of Student %d\n", i + 1);
        
        // Input roll number
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        // Input name
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        // Input marks
        printf("Enter Chemistry Marks: ");
        scanf("%d", &s[i].chemMarks);
        printf("Enter Mathematics Marks: ");
        scanf("%d", &s[i].mathsMarks);
        printf("Enter Physics Marks: ");
        scanf("%d", &s[i].phyMarks);
        
        printf("\n"); // Newline for better readability
    }
    
    // Variables to store total marks and percentage
    int total = 0;
    float per = 0;
    
    // Loop to display details of each student
    for(int i = 0; i < 5; i++) {
        printf("Details of Student %d:\n", i + 1);
        
        // Display student details
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Chemistry Marks: %d\n", s[i].chemMarks);
        printf("Mathematics Marks: %d\n", s[i].mathsMarks);
        printf("Physics Marks: %d\n", s[i].phyMarks);
        
        // Calculate total marks and percentage
        total = s[i].phyMarks + s[i].mathsMarks + s[i].chemMarks;
        per = (float)total / 3;  // Corrected the percentage calculation
        
        // Display total and percentage
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f%%\n", per);
        printf("-----------------------------------\n"); // Separator for readability
    }
}
