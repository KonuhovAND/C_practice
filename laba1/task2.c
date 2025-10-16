#include <stdio.h>

int main() {
    int N;
    int fool = scanf("%d", &N);

    int *seq; // максимум 100 элементов для простоты
    if (fool != 1 || N < 1 || N > 100) {
        printf("Ошибка ввода\n");
        return 0;
    }
    seq = (int*)malloc(N * sizeof(int));
    if (seq == NULL) {
        printf("Ошибка выделения памяти\n");
        return 0;
    }
    
    for (int i = 0; i < N; i++) {
        int fool = scanf("%d", &seq[i]);
        if (fool != 1) {
            printf("Ошибка ввода\n");
            free(seq);
            return 0;
        }
    }


    int i1 = -1, i2 = -1;
    for (int i = 0; i < N; i++) {
        if (seq[i] >0 && i1 == -1) {
            i1 = i;
        } else if (seq[i] >i && i1 != -1 && i2 == -1) {
            i2 = i;
            break;
        }
    }
    int sum,cnt;
    sum = cnt = 0;
    if (i1 != -1 && i2 != -1) {
        for (int i = i1 + 1; i < i2; i++) {
            sum += seq[i];
            cnt++;
        }
    }
    free(seq);
    printf("%d %d\n", sum, cnt);
    return 0;
}