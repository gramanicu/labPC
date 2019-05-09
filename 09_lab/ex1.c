#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afisare(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

void bubbleSort(int *p, int n) {
    char change = 1;
    int aux;
    while (change) {
        change = 0;
        for (int i = 0; i < n - 1; i++) {
            if (*(p + i) > *(p + i + 1)) {
                aux = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = aux;
                change = 1;
            }
        }
    }
}

int main() {
    int n, max;
    scanf("%d", &n);
    scanf("%d", &max);

    int *p = calloc(n, sizeof(int));

    srand(time(0));
    for (int i = 0; i < n; i++) {
        *(p + i) = rand() % max;
    }
    afisare(p, n);
    bubbleSort(p, n);
    afisare(p, n);

    free(p);
    return 0;
}