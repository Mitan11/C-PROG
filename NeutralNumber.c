#include<stdio.h>

void main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    if(num == 0){
        printf("This number is Neutral");
    }
    else if(num > 0){
        printf("This number is Positive");
    }
    else{
        printf("This number is Negative");
    }
}