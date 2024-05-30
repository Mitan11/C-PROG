#include<stdio.h>

void main(){
    int angle_1, angle_2 , angle_3;
    printf("Enter Angle 1 : ");
    scanf("%d",&angle_1);
    printf("Enter Angle 2 : ");
    scanf("%d",&angle_2);
    angle_3 = 180 - (angle_1 + angle_2);
    printf("Angle 3 is %d", angle_3);
}