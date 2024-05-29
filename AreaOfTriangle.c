#include<stdio.h>

void main(){
    float area , b , h;
    printf("Enter the Base of the Triangle : ");
    scanf("%f", &b);
    printf("Enter the height of the Triangle : ");
    scanf("%f", &h);
    area = 0.5 * (h * b);
    printf("Area of Triangle is %f", area);
}