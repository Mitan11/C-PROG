#include<stdio.h>

void main(){
    int l , w;
    printf("Enter Length : ");
    scanf("%d", &l);
    printf("Enter Width : ");
    scanf("%d", &w);
    int area = l * w;
    printf("Area of Rectangle is %d", area);
}