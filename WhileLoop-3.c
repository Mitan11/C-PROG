#include<stdio.h>

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i = 1;
    while (i <= n){
        printf("%d\n", i);
        i++;
    }
}