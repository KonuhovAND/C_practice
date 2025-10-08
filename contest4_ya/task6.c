#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int *list;
    int n;
    int fool_proof = scanf("%d", &n);
    list = malloc(sizeof(int) * n);
    
    if (fool_proof != 1 || n <= 0) {
        printf("ошибка ввода данных");
        free(list);
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        int fool_proof = scanf("%d", &list[i]);
        if (fool_proof != 1) {
            printf("ошибка ввода данных");
            free(list);
            return 0;
        }
    }

   for (int i = 0; i < n / 2; i++) {
        int temp = list[i];
        list[i] = list[n - 1 - i];
        list[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", list[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    free(list);
    return 0;
}