/* 
Q.3 Triangle Angle Finder
Write a program to find the third angle of a right triangle when two other angles are given.
Example:
Input: First angle: 65, Second angle: 45
Output: Third angle: 70
*/

#include<stdio.h>

void main(){
    // Declare variables for the three angles of the triangle
    int angle1, angle2 , angle3;
    
    // Prompt the user to enter the value of the first angle
    printf("Enter the value of the first angle : ");
    // Read the value of the first angle entered by the user and store it in the variable 'angle1'
    scanf("%d",&angle1);
    
    // Prompt the user to enter the value of the second angle
    printf("Enter the value of the second angle : ");
    // Read the value of the second angle entered by the user and store it in the variable 'angle2'
    scanf("%d",&angle2);
    
    /* Calculate the value of the third angle of the triangle using the formula:
    Third angle = 180 - (First angle + Second angle) */
    angle3 = 180 - (angle1 + angle2);
    
    // Print the value of the third angle of the triangle
    printf("The value of the third angle is %d", angle3);
}
