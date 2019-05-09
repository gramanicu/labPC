#include <stdio.h>
#include <stdlib.h>

struct mat_rara {
    int L;         // cate linii are matricea 20000
    int C;         // cate coloane are matricea 213243
    int LIN[100];  // vector pt linii
    int COL[100];  // vector pt coloane
    int X[100];    // vector pt valori
    int N;         // nr de elemente != 0
};

void read_elements(struct mat_rara *m, int a, int b);
void print_m(struct mat_rara *m, int a, int b);
void sum_m(struct mat_rara *m1, struct mat_rara *m2, struct mat_rara *m3, int a,
           int b);
int get_element(struct mat_rara *m, int i, int j);

int main() {
    struct mat_rara matrice;
    struct mat_rara matrice2;
    struct mat_rara suma;
    int a, b;

    if (!scanf("%d", &a)) {
        exit(0);
    };
    if (!scanf("%d", &b)) {
        exit(0);
    };
    matrice.N = 0;
    matrice2.N = 0;
    suma.N = 0;

    read_elements(&matrice, a, b);
    read_elements(&matrice2, a, b);
    sum_m(&matrice, &matrice2, &suma, a, b);
    print_m(&suma, a, b);

    return 0;
}

void read_elements(struct mat_rara *m, int a, int b) {
    int aux;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (!scanf("%d", &aux)) {
                exit(0);
            };
            if (aux != 0) {
                m->COL[m->N] = j;
                m->LIN[m->N] = i;
                m->X[m->N] = aux;
                m->N++;
            }
        }
    }
}

void print_m(struct mat_rara *m, int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d", get_element(m, i, j));
            if (j < b - 1) printf(" ");
        }
        printf("\n");
    }
}

int get_element(struct mat_rara *m, int i, int j) {
    for (int k = 0; k < m->N; k++) {
        if (m->LIN[k] == i && m->COL[k] == j) return m->X[k];
    }
    return 0;
}

void sum_m(struct mat_rara *m1, struct mat_rara *m2, struct mat_rara *sum,
           int a, int b) {
    int e1, e2, s = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            s = 0;
            e1 = get_element(m1, i, j);
            e2 = get_element(m2, i, j);
            s += e1 + e2;
            if (s != 0) {
                sum->COL[sum->N] = j;
                sum->LIN[sum->N] = i;
                sum->X[sum->N] = s;
                sum->N++;
            }
        }
    }
}