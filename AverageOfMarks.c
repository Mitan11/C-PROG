#include<stdio.h>

void main(){
    float state , acc , eco;
    float avg;
    printf("Enter state Marks out of 100 : ");
    scanf("%f", &state);
    printf("Enter acc Marks out of 100 : ");
    scanf("%f", &acc);
    printf("Enter eco Marks out of 100 : ");
    scanf("%f", &eco);
    avg = (state + acc + eco) / 3;
    printf("Average Marks is %.2f", avg);
}