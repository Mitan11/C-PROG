#include<stdio.h>

void main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("It is an Leap Year");
            }
            else{
                printf("Not a Leap Year");
            }
        }
        else{
            printf("It is an Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
}