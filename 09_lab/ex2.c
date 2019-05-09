#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int n, int m);
void free_2d(int **a, int n);
void scrie(int **a, int n, int m);
void afiseaza(int **a, int n, int m);

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int **a = alloc_2d(n, m);
    scrie(a, n, m);
    afiseaza(a, n, m);
    free_2d(a, n);

    return 0;
}

int **alloc_2d(int n, int m) {
    int **a;
    a = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        *(a + i) = calloc(m, sizeof(int));
    }
    return a;
}

void scrie(int **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(a + i) + j) = i + j;
        }
    }
}

void afiseaza(int **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}

void free_2d(int **a, int n) {
    for (int i = 0; i < n; i++) {
        free(*(a + i));
    }
    free(a);
}