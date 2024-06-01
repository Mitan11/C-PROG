/*
Q.2 Gross Salary Calculator
Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
the base salary as chosen by the user.
Example:
Input:  Base Salary: 100 
        HRA=10% 
        DA=5%
        TA=8%
Output: Gross Salary: Rs. 123
*/

#include <stdio.h>

void main() {
    // Declare variables for base salary, house rent allowance (HRA), dearness allowance (DA), and traveling allowance (TA)
    int bs, hra, da, ta;
    /* 'bs' stands for Base Salary
    'hra' stands for House Rent Allowance
    'da' stands for Dearness Allowance
    'ta' stands for Traveling Allowance */
    
    // Prompt the user to enter the base salary
    printf("Enter Basic Salary : ");
    // Read the base salary entered by the user
    scanf("%d", &bs);
    
    // Prompt the user to enter the house rent allowance percentage
    printf("Enter House Rent Allowance : ");
    // Read the house rent allowance percentage entered by the user
    scanf("%d", &hra);
    
    // Prompt the user to enter the dearness allowance percentage
    printf("Enter Dearness Allowance : ");
    // Read the dearness allowance percentage entered by the user
    scanf("%d", &da);
    
    // Prompt the user to enter the traveling allowance percentage
    printf("Enter Traveling Allowance : ");
    // Read the traveling allowance percentage entered by the user
    scanf("%d", &ta);
    
    // Calculate the actual house rent allowance based on the base salary
    hra = bs * hra / 100;
    // Calculate the actual dearness allowance based on the base salary
    da = bs * da / 100;
    // Calculate the actual traveling allowance based on the base salary
    ta = bs * ta / 100;
    
    // Calculate the gross salary by adding base salary, house rent allowance, dearness allowance, and traveling allowance
    int gs = bs + hra + da + ta;
    
    // Print the gross salary
    printf("Gross Salary is %d\n", gs);
}
