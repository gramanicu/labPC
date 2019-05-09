#include <stdio.h>
#include <stdlib.h>

typedef struct sPolinom polinom;

struct sPolinom {
    int grad;
    int coeficient[100];
};

void citeste(polinom *p);
void afiseaza(polinom *p);
void aduna(polinom *p1, polinom *p2, polinom *s);
void scade(polinom *p1, polinom *p2, polinom *d);

int main() {
    polinom p1, p2;
    polinom s, d;

    citeste(&p1);
    citeste(&p2);

    aduna(&p1, &p2, &s);
    scade(&p1, &p2, &d);

    printf("Suma polinoamelor : ");
    afiseaza(&s);
    printf("Diferenta polinoamelor : ");
    afiseaza(&d);

    return 0;
}

void citeste(polinom *p) {
    scanf("%d", &(p->grad));
    for (int i = 0; i <= p->grad; i++) {
        scanf("%d", &(p->coeficient[i]));
    }
}

void afiseaza(polinom *p) {
    for (int i = 0; i <= p->grad; i++) {
        printf("%d*X^%d", p->coeficient[i], p->grad - i);
        if (i < p->grad) printf(" + ");
    }
    printf("\n");
}

void aduna(polinom *p1, polinom *p2, polinom *s) {
    int gradMax = p1->grad >= p2->grad ? p1->grad : p2->grad;
    int gradMin = p1->grad <= p2->grad ? p1->grad : p2->grad;
    s->grad = gradMax;
    if (p1->grad > gradMin) {
        for (int i = 0; i < gradMin; i++) {
            s->coeficient[i] = p1->coeficient[i];
        }

        for(int i=gradMin; i<=gradMax; i++) {
            s->coeficient[i] = p1 -> coeficient[i] + p2 -> coeficient[i-gradMin];
        }
    } else if (p2->grad > gradMin) {
        for (int i = 0; i < gradMin; i++) {
            s->coeficient[i] = p2->coeficient[i];
        }
        
        for(int i=gradMin; i<=gradMax; i++) {
            s->coeficient[i] = p1 -> coeficient[i] + p2 -> coeficient[i-gradMin];
        }
    }

}

void scade(polinom *p1, polinom *p2, polinom *s) {
    int gradMax = p1->grad >= p2->grad ? p1->grad : p2->grad;
    int gradMin = p1->grad <= p2->grad ? p1->grad : p2->grad;
    s->grad = gradMax;
    if (p1->grad > gradMin) {
        for (int i = 0; i < gradMin; i++) {
            s->coeficient[i] = p1->coeficient[i];
        }

        for(int i=gradMin; i<=gradMax; i++) {
            s->coeficient[i] = p1 -> coeficient[i] - p2 -> coeficient[i-gradMin];
        }
    } else if (p2->grad > gradMin) {
        for (int i = 0; i < gradMin; i++) {
            s->coeficient[i] = p2->coeficient[i];
        }
        
        for(int i=gradMin; i<=gradMax; i++) {
            s->coeficient[i] = p1 -> coeficient[i] - p2 -> coeficient[i-gradMin];
        }
    }

}