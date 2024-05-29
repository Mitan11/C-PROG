#include<stdio.h>

void main(){
    int num1 , num2;
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    if(num1<num2){
        printf("Number 1 is Less than Number 2");
    }
    else{
        printf("Number 2 is less than Number 1");
    }
}