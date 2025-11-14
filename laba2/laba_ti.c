#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

void buildMatrixSum(int N, float A[N][N], float B[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      float sum = 0.0;
      for (int x = 0; x <= i; x++) {
        for (int y = 0; y <= j; y++) {
          sum += A[x][y];
        }
      }
      B[i][j] = sum;
    }
  }
}

void buildMatrixMax(int N, float A[N][N], float B[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      float max = A[0][0];
      for (int x = 0; x <= i; x++) {
        for (int y = 0; y <= j; y++) {
          if (A[x][y] > max)
            max = A[x][y];
        }
      }
      B[i][j] = max;
    }
  }
}

int main() {
  int N;

  if (scanf("%d", &N) == 0 || N <= 0) {
    printf("Entered incorect data!\n");
  }

  float A[N][N], B[N][N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      scanf("%f", &A[i][j]);

  buildMatrixSum(A, B, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%f ", B[i][j]);
    }
    printf("\n");
  }

  buildMatrixMax(A, B, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%f ", B[i][j]);
    }
    printf("\n");
  }

  return 0;
}
