#include <stdio.h>

void main(){
    int a, b, c;
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);
    printf("Enter Number 3 : ");
    scanf("%d", &c);
    int eval = a + b * c - b / c;
    printf("Evaluated Expression is %d", eval);
}