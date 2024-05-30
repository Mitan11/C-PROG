#include<stdio.h>

void main(){
    int score;
    char grade;
    printf("Enter Your Score Out of 100 : ");
    scanf("%d",&score);
    if(score>=90 && score<=100){
        grade = 'A';
        printf("Your Grade is %c. ",grade);
    }
    else if(score>=80 && score<90){
        grade = 'B';
        printf("Your Grade is %c. ",grade);
    }
    else if(score>=70 && score<80){
        grade = 'C';
        printf("Your Grade is %c. ",grade);
    }
    else if(score>=60 && score<70){
        grade = 'D';
        printf("Your Grade is %c. ",grade);
    }
    else if(score>=0 && score<60){
        grade = 'F';
        printf("Your Grade is %c. ",grade);
    }
    else{
        printf("score is not a Integer or Out of Range");
    }
    switch(grade){
        case 'A':
        printf("Excellent work! ");
        break;
        case 'B':
        printf("Well done! ");
        break;
        case 'C':
        printf("Good job! ");
        break;
        case 'D':
        printf("You passed, but you could do better ");
        break;
        case 'F':
        printf("Sorry, you failed ");
        break;
        default:
        printf("");
    }
    if(grade>='A' && grade<='D')
        printf("Congratulations! You are eligible for the next level");
    else if(grade=='F')
        printf("Please try again next time");
}