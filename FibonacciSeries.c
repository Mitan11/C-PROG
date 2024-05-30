#include<stdio.h>

void main(){
    int i, n;
    int f1 = 1, f2 = 0, f3 = 0;
    printf("Enter a Number For Fibonacci Series : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        printf("\n%d",f3);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
}