#include<stdio.h>

void main(){
    int mark;
    printf("Enter Marks : ");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100){
        printf("Your Grade is A");
    }
    else if(mark>=80 && mark<90){
        printf("Your Grade is B");
    }
    else if(mark>=70 && mark<80){
        printf("Your Grade is C");
    }
    else if(mark>=60 && mark<70){
        printf("Your Grade is D");
    }
    else if(mark>=0 && mark<60){
        printf("Your Grade is F");
    }
    else{
        printf("Marks is not a Integer or Out of Range");
    }
}