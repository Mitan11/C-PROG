#include<stdio.h>
void main(){
    int bs , hra , da;
    printf("Enter Basic Salary : ");
    scanf("%d", &bs);
    hra = bs * 0.2;
    da = bs * 0.5;
    int gs = bs + hra + da;
    printf("Gross Salary is %d",gs);
}