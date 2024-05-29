#include<stdio.h>

void main(){
    float f,c;
    printf("Enter Temperature in Celsius : ");
    scanf("%f",&c);
    f = c * 9 / 5 + 32;
    printf("Equivalent Temperature in Fahrenheit is %.2f",f);
}