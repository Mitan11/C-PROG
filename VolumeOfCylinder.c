#include<stdio.h>
#define PI 3.14159

void main(){
    float r , h , v;
    printf("Enter The Radius of The Cylinder : ");
    scanf("%f",&r);
    printf("Enter The Height of The Cylinder : ");
    scanf("%f",&h);
    v = PI * r * r * h;
    printf("Volume of The Cylinder is %.5f",v);
}