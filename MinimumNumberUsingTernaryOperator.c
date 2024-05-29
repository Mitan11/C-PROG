#include<stdio.h>

void main(){
    int num1 , num2 , num3;
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    printf("Enter Number 3 : ");
    scanf("%d",&num3);
    (num1>num2)?
        (num1>num3)?
            printf("Number 1 is Greater")
        :
            printf("Number 3 is Greater")
    :
        (num2>num3)?
            printf("Number 2 is Greater")
        :
            printf("Number 3 is Greater");
}