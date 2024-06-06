#include<stdio.h>

void main(){
    // Declare variables for the two numbers
    int num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter Number 1 : ");
    // Read the first number entered by the user and store it in variable 'num1'
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter Number 2 : ");
    // Read the second number entered by the user and store it in variable 'num2'
    scanf("%d", &num2);

    // Check if num1 is less than num2
    if(num1 < num2){
        // If num1 is less than num2, print that num1 is less
        printf("Number 1 is Less than Number 2\n");
        // Print the value of num1 as the minimum number
        printf("The minimum value is: %d", num1);
    }
    else{
        // If num2 is less than or equal to num1, print that num2 is less
        printf("Number 2 is Less than or Equal to Number 1\n");
        // Print the value of num2 as the minimum number
        printf("The minimum value is: %d", num2);
    }
}
