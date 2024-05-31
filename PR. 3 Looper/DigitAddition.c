#include<stdio.h>

void main(){
    int num = 0, digit = 0, sum = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);
    
    digit = num % 10;
    while(num >= 10){
        num /= 10;
    }
    sum = digit + num;
    printf("First and Last Digit Addition is %d", sum);
}

