#include<stdio.h>

void main(){
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    if(num>=10 && num<=20){
        printf("In Range");
    }
    else{
        printf("Out Of Range");
    }
}