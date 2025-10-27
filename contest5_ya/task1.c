#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int m, n;
    
    int fool_proof = scanf("%d%d", &n, &m);
    if (fool_proof != 2 || n <= 0 || m <= 0){
        printf("ошибка ввода данных");
        return 0;
    }
    
    int list[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &list[i][j]);
        }
    }
    
    int row;
    int row_input = scanf("%d", &row);
    
    if (row_input != 1 || row < 0 || row >= n){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                printf("%d ", list[i][j]);}
            printf("\n");
        }
        return 0;
    }
    

    for (int j = 0; j < m/2; j++){
        int tmp = list[row][j];
        list[row][j] = list[row][m - j - 1];
        list[row][m - j - 1] = tmp;
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    return 0; 
}
