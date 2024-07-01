/*
Write a Program to create an Employee Record System with an Array of objects for a
given N number of employees using structure. Consider the below-mentioned
attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/

#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int emp_id;              // Employee ID
    char emp_name[50];       // Employee Name
    int emp_age;             // Employee Age
    char emp_role[50];       // Employee Role
    char emp_city[50];       // Employee City
    int emp_experience;      // Employee Experience in years
    char emp_company_name[50]; // Company Name
};

void main() {
    int N; // Number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    // Declare an array of Employee structures
    struct Employee employees[N];

    // Input employee details
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        // Input employee ID
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        // Input employee name
        printf("Employee Name: ");
        scanf("%s", employees[i].emp_name);

        // Input employee age
        printf("Employee Age: ");
        scanf("%d", &employees[i].emp_age);

        // Input employee role
        printf("Employee Role: ");
        scanf("%s", employees[i].emp_role);

        // Input employee city
        printf("Employee City: ");
        scanf("%s", employees[i].emp_city);

        // Input employee experience
        printf("Employee Experience (in years): ");
        scanf("%d", &employees[i].emp_experience);

        // Input employee company name
        printf("Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    // Display employee details
    printf("\nEmployee Records:\n");
    for (int i = 0; i < N; i++) {
        printf("\nDetails of employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Employee Name: %s\n", employees[i].emp_name);
        printf("Employee Age: %d\n", employees[i].emp_age);
        printf("Employee Role: %s\n", employees[i].emp_role);
        printf("Employee City: %s\n", employees[i].emp_city);
        printf("Employee Experience: %d years\n", employees[i].emp_experience);
        printf("Company Name: %s\n", employees[i].emp_company_name);
    }
}
