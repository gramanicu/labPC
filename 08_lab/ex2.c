#include <stdio.h>

void ex2(int **p) {
    *p = (int *)0xcafebabe;
}

int main() {
    int a=1;
    int *p=&a;
    ex2(&p);
    printf("%p\n", p);    
}