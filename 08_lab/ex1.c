#include <stdio.h>

void ex1(int nr1, int nr2, int *suma, int *prod) {
    *suma = nr1 + nr2;
    *prod = nr1 * nr2;
}

int main() {
    int nr1, nr2, s, p;
    scanf("%d", &nr1);
    scanf("%d", &nr2);
    ex1(nr1,nr2,&s,&p);
    printf("Suma = %d\n", s);
    printf("Produs = %d\n", p);
    return 0;
}