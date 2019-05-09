#include <stdio.h>
#include <string.h>

#define SET_SIZE 100
typedef unsigned char SET[SET_SIZE];

// insert_in_set(s, n) - adauga numarul n in multimea s
void insert_in_set(SET s, unsigned int n) {
    s[n / 8] |= 1 << (n % 8);
}

// delete_from_set(s, n) - scoate numarul n din multimea s
void delete_from_set(SET s, unsigned int n) {
    s[n / 8] &= ~(1 << (n % 8));
}

// is_in_set(s, n) - returneaza 1 daca n este in s, 0 altfel
int is_in_set(SET s, unsigned int n) {
    return ((s[n / 8] & (1 << (n % 8))) == 1 << (n % 8)) ? 1 : 0;
}

// delete_all_from_set(s) - elimina toate elementele din multime
void delete_all_from_set(SET s) {
    for (int i = 0; i < SET_SIZE * 8; i++) {
        {
            delete_from_set(s, i);
        }
    }
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

int main() {
    SET s;
    int nrCitite, aux;
    memset(s, 0, sizeof(s));

    nrCitite = read_set(s);
    printf("au fost citite %d elemente, : ", nrCitite);
    print_set(s);

    if (is_empty_set(s)) {
        printf("nu exista niciun element\n");
    } else {
        aux = card_set(s);
        printf("setul contine %d elemente\n", aux);
    }

    printf("alegeti un element pe care sa il stergeti : ");
    scanf("%d", & aux);
    delete_from_set(s, aux);
    printf("elementele care au ramas sunt : ");
    print_set(s);

    printf("se vor sterge toate elementele si se va adauga nr 183\n");
    delete_all_from_set(s);
    insert_in_set(s, 183);
    printf("setul contine elementul : ");
    print_set(s);

    printf("se vor cauta elementele 183 si 210 in set (unul existent si unul nonexistent)\n");
    if (is_in_set(s, 183)) printf("elementul 183 este in set\n");
    if (!is_in_set(s, 210)) printf("elementul 210 nu este in set\n");

    return 0;
}