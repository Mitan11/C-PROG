#include<stdio.h>
void main(){
    int p , r , t;
    printf("Enter Principal Amount : ");
    scanf("%d", &p);
    printf("Enter Rate of Interest : ");
    scanf("%d", &r);
    printf("Enter Period (in Years) : ");
    scanf("%d", &t);
    int si = (p * r * t) / 100;
    printf("Simple Intrest is %d", si);
}