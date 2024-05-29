#include<stdio.h>

void main(){
    int num1 ,num2 ,num3 ,num4;
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    printf("Enter Number 3 : ");
    scanf("%d",&num3);
    printf("Enter Number 4 : ");
    scanf("%d",&num4);
    if(num1>num2){
        if(num1>num3){
            if(num1>num4){
                printf("Number 1 is Greater");
            }
            else{
                printf("Number 4 is Greater");
            }
        }
        else{
            if(num3>num4){
                printf("Number 3 is Greater");
            }
            else{
                printf("Number 4 is Greater");
            }
        }
    }
    else{
        if(num2>num3){
            if(num2>num4){
                printf("Number 2 is Greater");
            }
            else{
                printf("Number 4 is Greater");
            }
        }
        else{
            if(num3>num4){
                printf("Number 3 is Greater");
            }
            else{
                printf("Number 4 is Greater");
            }
        }
    }
}