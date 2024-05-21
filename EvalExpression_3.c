#include<stdio.h>

void main(){
    int a , b , c , d , e;
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);
    printf("Enter Number 3 : ");
    scanf("%d", &c);
    printf("Enter Number 4 : ");
    scanf("%d", &d);
    printf("Enter Number 5 : ");
    scanf("%d", &e);
    int eval = a * b  + c / d - e;
    printf("Evaluated Expression is %d", eval);
}