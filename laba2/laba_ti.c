#include <stdio.h>
#include <stdlib.h>

void buildMatrixSum(int N, double A[N][N], double B[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      double sum = 0.0;
      for (int x = 0; x <= i; x++) {
        for (int y = 0; y <= j; y++) {
          sum += A[x][y];
        }
      }
      B[i][j] = sum;
    }
  }
}

void buildMatrixMax(int N, double A[N][N], double B[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      double max = A[0][0];
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

  if (scanf("Enter size of square matrix: %d ", &N) == 0 || N <= 0) {
    printf("Entered incorect data!\n");
    return 0;
  }
  double A[N][N], B[N][N];
  printf("Enter values for matrix like that 1 1 1\n 2 2 3\n 3 3 3\n...");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%lf", &A[i][j]);
    }
  }
  buildMatrixSum(A, B, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%lf ", B[i][j]);
    }
    printf("\n");
  }

  buildMatrixMax(A, B, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%lf ", B[i][j]);
    }
    printf("\n");
  }

  return 0;
}
