#include<stdio.h>
#define PI 3.14159
void main(){
    float r;
    printf("Enter The Radius of the Circle : ");
    scanf("%f",&r);
    r = 2 * PI * r;
    printf("Perimeter of the Circle is %.5f", r);
}