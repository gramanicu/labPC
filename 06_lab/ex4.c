#include <stdio.h>

#define N 100

void citesteMatrice(int a[N][N], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}

void copiere(int a[N][N], int b[N][N], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      a[i][j] = b[i][j];
    }
  }
}

void transpuneMatrice(int a[N][N], int n, int b[N][N]) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      b[i][j] = a[n - j - 1][i];
    }
  }

  copiere(a, b, n);
}

void afiseazaMatrice(int m[N][N], int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  int n, a[N][N], b[N][N]={0};

  scanf("%d", &n);
  citesteMatrice(a, n);
  transpuneMatrice(a, n, b);
  afiseazaMatrice(a, n);

  return 0;
}
