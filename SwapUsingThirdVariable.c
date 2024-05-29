#include<stdio.h>

void main(){
    int num1, num2, temp;
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Number 1 After Swapping is %d\n",num1);
    printf("Number 2 After Swapping is %d",num2);
}