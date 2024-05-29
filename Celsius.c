#include<stdio.h>

void main(){
    int f,c;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d",&f);
    c = (f - 32) + 5 / 9;
    printf("Equivalent Temperature in Celsius is %d",c);
}