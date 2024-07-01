/*
Write a Program to create a Student Record System for 3 students using structure.
Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include <stdio.h>

// Define the structure for student
struct Student {
    int stu_id;           // Student ID
    char stu_name[50];    // Student Name
    int stu_age;          // Student Age
    char stu_course[50];  // Student Course
    char stu_city[50];    // Student City
    int stu_standard;     // Student Standard
    char stu_school[50];  // Student School
};

void main() {
    struct Student student; // Single student structure
    int i; // Loop counter

    // Input student details
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Input student ID
        printf("Student ID: ");
        scanf("%d", &student.stu_id);

        // Input student name
        printf("Student Name: ");
        scanf("%s", student.stu_name);

        // Input student age
        printf("Student Age: ");
        scanf("%d", &student.stu_age);

        // Input student course
        printf("Student Course: ");
        scanf("%s", student.stu_course);

        // Input student city
        printf("Student City: ");
        scanf("%s", student.stu_city);

        // Input student standard
        printf("Student Standard: ");
        scanf("%d", &student.stu_standard);

        // Input student school
        printf("Student School: ");
        scanf("%s", student.stu_school);

        printf("\n"); // Newline for better readability

        // Display student details
        printf("Details of student %d:\n", i + 1);
        printf("Student ID: %d\n", student.stu_id);
        printf("Student Name: %s\n", student.stu_name);
        printf("Student Age: %d\n", student.stu_age);
        printf("Student Course: %s\n", student.stu_course);
        printf("Student City: %s\n", student.stu_city);
        printf("Student Standard: %d\n", student.stu_standard);
        printf("Student School: %s\n", student.stu_school);
        printf("------------------------------------------------\n"); // Newline for better readability
    }
}

