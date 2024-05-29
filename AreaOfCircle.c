#include<stdio.h>
#define PI 3.14

void main(){
    float r , area;
    printf("Enter the Number of Circle : ");
    scanf("%f",&r);
    area = PI * r * r;
    printf("Area of the Circle is %f", area);
}