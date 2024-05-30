#include<stdio.h>

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i = n;
    while (i >= 1){
        printf("%d\n", i);
        i-=2;
    }
}