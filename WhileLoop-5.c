#include <stdio.h>

void main(){
    int year1, year2;
    printf("Enter a year 1 : ");
    scanf("%d", &year1);
    printf("Enter a year 2 : ");
    scanf("%d", &year2);
    int i = 1;
    while (year1 <= year2){
        if (year1 % 4 == 0){
            if (year1 % 100 == 0){
                if (year1 % 400 == 0){
                    printf("%d\n", year1);
                }
            }
            else{
                printf("%d\n", year1);
            }
        }
        year1++;
    }
}