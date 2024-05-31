#include<stdio.h>

void main(){
    char str = 'a';

    do{
        printf("%c %d\n", str,str);
        str+=4;
    }while(str <= 'z');
}