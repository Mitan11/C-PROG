#include<stdio.h>
void main(){
    int bs , hra , da , ta;
    printf("Enter Basic Salary : ");
    scanf("%d", &bs);
    printf("Enter House Rent Allowance : ");
    scanf("%d", &hra);
    printf("Enter Dearness Allowance : ");
    scanf("%d", &da);
    printf("Enter Traveling Allowance : ");
    scanf("%d", &ta);
    hra = bs * hra / 100;
    da = bs * da / 100;
    ta = bs * ta / 100;
    int gs = bs + hra + da + ta;
    printf("Gross Salary is %d",gs);
}