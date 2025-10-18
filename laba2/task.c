#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Введите размер квадратной матрицы (не более 20): ");
    int fool_proof = scanf("%d", &n);

    if (fool_proof != 1 || n <= 0 || n > 20) {
        printf("ошибка ввода данных");
        return 0;
    }
    float main_list[n][n];
    float res_list[n][n];
    printf("Введите элементы матрицы %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fool_proof = scanf("%f", &main_list[i][j]);
            if (fool_proof != 1) {
                printf("ошибка ввода данных"); 
                return 0;
            }
            res_list[i][j] = main_list[i][j];
        }
        printf("U entered row %d\n", i + 1);
    }   

    float max = res_list[0][0];
    float pre_max = res_list[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res_list[i][j] > max) {
                pre_max = max;
                max = res_list[i][j];
            } else if (res_list[i][j] > pre_max && res_list[i][j] < max) {
                pre_max = res_list[i][j];
            }
        }
    }
    int flag;
    if (max == pre_max) {
        // printf("Нет второго по величине элемента");
        flag = 0;
    } else {
        // printf("Второй по величине элемент: %.0f", pre_max);
        flag = 1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n) {
                if (main_list[i][j] == max && flag == 1) {
                    res_list[i][j] = pre_max;
                } else {
                    res_list[i][j] = max;
                }
            } else {
                res_list[i][j] = main_list[i][j];
            }
        }
    }
    
    printf("\nМатрица A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4.0f ", main_list[i][j]);
        }
        printf("\n");
    }
    
    printf("\nМатрица B (результат):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4.0f ", res_list[i][j]);
        }
        printf("\n");
    }


    return 0;
}