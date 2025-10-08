#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>

int make_bin_number(int n){
    int bin_number = 0;
    int base = 1;
    while (n > 0){
        int last_digit = n % 2;
        bin_number += last_digit * base;
        base *= 10;
        n /= 2;
    }
    return bin_number;
}

int main(){
    setlocale(0, "");
    int n;
    int x =scanf("%d", &n);
    if (x ==0 || n <=0 || n >= 256 ){
        printf("ошибка ввода данных");
        return 0;
    }
    printf("Десятичному числу %d соответствует двоичное %d",n,make_bin_number(n));
    return 0;
}