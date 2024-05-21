#include<stdio.h>

void main(){
    int a , b , c , d;
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);
    printf("Enter Number 3 : ");
    scanf("%d", &c);
    printf("Enter Number 4 : ");
    scanf("%d", &d);
    int eval = ( a + b ) * ( c - d );
    printf("Evaluated Expression is %d", eval);
}