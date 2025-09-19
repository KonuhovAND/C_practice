#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(0,"");
    float x,y;
    int flag;
    int points;
    flag = scanf("%f",&x);
    if (flag == 0){
        printf("ошибка ввода данных");
        return 0;
    }

    flag = scanf("%f",&y);
    if (flag == 0){
        printf("ошибка ввода данных");
        return 0;
    }
    
    return 0;
}