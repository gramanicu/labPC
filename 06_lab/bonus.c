#include <stdio.h>

#define N 100
#define M 100

int citesteMatrice(int a[N][M], int n, int m) {
  int i, j;
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      scanf("%d", &a[i][j]);
    }
  }
  return 0;
}

int afiseazaMatrice(int a[N][M], int n, int m) {
  int i, j;
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int sorteazaMatrice(int a[N][M], int n, int m) {
  int i, j, k, change = 1;

  while (change) {
    change = 0;
    // verticala
    for (i = 0; i < n - 1; i++) {
      k = i;
      for (j = 0; j < m - 1; j++) {
        if (a[k + 1][j + 1] < a[k][j]) {
          int aux = a[k][j];
          a[k][j] = a[k + 1][j + 1];
          a[k + 1][j + 1] = aux;
          change = 1;
        }
        if (k < n - 2) {
          k++;
        } else {
          break;
        }
      }
    }

    // orizontala

    for (i = 1; i < m - 1; i++) {
      k = i;
      for (j = 0; j < n - 1; j++) {
        if (a[j + 1][k + 1] < a[j][k]) {
          int aux = a[j][k];
          a[j][k] = a[j + 1][k + 1];
          a[j + 1][k + 1] = aux;
          change = 1;
        } else {
          break;
        }
      }
    }
  }

  return 0;
}

int main() {
  int a[N][M], n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  citesteMatrice(a, n, m);
  sorteazaMatrice(a, n, m);
  afiseazaMatrice(a, n, m);
}
