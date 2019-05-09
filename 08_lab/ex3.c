#include <stdio.h>

void printVector(int *x, int n) {
    int i,j;
    for(i=0;i<n;i++) {
        printf("%2d - ", *x+i);
        for(j=0;j<4;j++) {
            printf("%02x ", *((unsigned char *)x+i*4+j));
        }
        printf("\n");
    }
}

void printNumber(int *x) {
    int i;
    printf("%d - ", *x);
    for(i=0;i<4;i++) {
        printf("%02x ", *((unsigned char *)x+i));
    }
    printf("\n");
}


int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int x;
    printVector(a, sizeof(a)/sizeof(int));
    printf("\nAlege un numar care sa fie afisat in hexa : ");
    scanf("%d", &x);
    printNumber(&x);
}