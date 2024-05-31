#include<stdio.h>

void main(){
    int num = 0, digit = 0, sum;

    printf("Enter a Number : ");
    scanf("%d", &num);
    
    while(num > 0){
        digit = num % 10;
        sum++;
        num /= 10;
    }
    printf("There are %d digits", sum);
}