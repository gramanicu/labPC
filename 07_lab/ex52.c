#include <stdio.h>
#include <string.h>

#define SET_SIZE 100
typedef unsigned char SET[SET_SIZE];


// insert_in_set(s, n) - adauga numarul n in multimea s
void insert_in_set(SET s, unsigned int n) {
    s[n / 8] |= 1 << (n % 8);
}

// is_in_set(s, n) - returneaza 1 daca n este in s, 0 altfel
int is_in_set(SET s, unsigned int n) {
    return ((s[n / 8] & (1 << (n % 8))) == 1 << (n % 8)) ? 1 : 0;
}

// read_set(a) - functia citeste numarul n de elemente care se afla in a
// apoi citeste cele n numere si le insereaza in a
// va returna numarul n citit (numarul de elemente)
int read_set(SET a) {
    int n, aux;
    printf("numarul de elemente = ");
    scanf("%d", & n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", & aux);
        insert_in_set(a, aux);
    }


    return n;
}

// print_set(a) - functia printeaza elementele multimii a
void print_set(SET a) {
    for (int i = 0; i < SET_SIZE * 8; i++) {
        {
            if (is_in_set(a, i)) printf("%d ", i);
        }
    }
    printf("\n");
}

// card_set(s) - returneaza cardinalul multimii s
int card_set(SET s) {
    int counter = 0;
    for (int i = 0; i < SET_SIZE * 8; i++) {
        {
            if (is_in_set(s, i)) counter++;
        }
    }
    return counter;
}

// is_empty_set(s) - verifica daca multimea este sau nu goala
// returneaza 1 daca este, 0 daca nu este
int is_empty_set(SET s) {
    return card_set(s) != 0 ? 0 : 1;
}

// c = a U b
void merge_set(SET a, SET b, SET c) {
    for(int i = 0 ; i <= SET_SIZE; i++) {
        c[i/8] = (a[i/8] | b[i/8]);
    }
}

// c = a n b
void intersect_set(SET a, SET b, SET c) {
    for(int i = 0 ; i <= SET_SIZE; i++) {
        c[i/8] = (a[i/8] & b[i/8]);
    }
}

// c = a \ b
void diff_set(SET a, SET b, SET c) {
    for(int i = 0 ; i <= SET_SIZE; i++) {
        c[i/8] = (a[i/8] & ~(b[i/8]));
    }
}

int main() {
    SET a,b,c;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    read_set(a);
    read_set(b);

    merge_set(a,b,c);
    printf("Reuniunea celor doua multimi este : ");
    print_set(c);

    intersect_set(a,b,c);
    if(is_empty_set(c)) {
        printf("Intersectia celor doua multimi este multimea vida !\n");
    } else {
        printf("Intersectia celor doua multimi este : ");
        print_set(c);
    }

    diff_set(a,b,c);
    if(is_empty_set(c)) {
        printf("Diferenta a\b este multimea vida !\n");
    } else {
        printf("Diferenta a\b este : ");
        print_set(c);
    }


}