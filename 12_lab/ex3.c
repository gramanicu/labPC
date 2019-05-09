#include <stdio.h>
#define NMAX 100
 
int main() {
    // numele fisierului de intrare
    char input_filename[] = "gigel_in.bin";
 
    // deschidere fisier de intrare pentru
    // citire (r) in modul text (t)
    FILE *in = fopen(input_filename, "rb");
 
    // verific daca fisierul a fost deschis cu succes
    // altfel opresc executia (in cazul acestei probleme)
    if (in == NULL) {
        fprintf(stderr, "ERROR: Can't open file %s", input_filename);
        return -1;
    }
 
    int n, v[NMAX], i; // numarul de elemente && vectorul
 
    // citesc n din fisier
    fscanf(in, "%d", &n);
    //citesc tabloul
    for (i = 0; i < n; ++i) {
        fscanf(in, "%d", &v[i]);
    }
 
    // deoarece stiu sigur ca nu mai am nimic de citit
    // pot inchide fisierul de intrare
    fclose(in);
 
    // dublez elementele din vector
    for (i = 0; i < n; ++i) {
        v[i] <<= 1;
    }
 
    // deschid fisierul pentru a scrie rezultatele
    char output_filename[] = "gigel.out";
    // deschid pentru scriere (w) in modul text (t)
    FILE *out = fopen(output_filename, "wt");
 
    // verific daca fisierul a fost deschis cu succes
    // altfel opresc executia (in cazul acestei probleme)
    if (out == NULL) {
        fprintf(stderr, "ERROR: Can't open file %s", output_filename);
        return -1;
    }
 
    // scriu n si vectorul in fisier
    fprintf(out, "%d\n", n);
    for (i = 0; i < n; ++i) {
        fprintf(out, "%d ", v[i]);
    }
    fprintf(out, "\n");
 
    // inchid fisierul de iesire
    fclose(out);
 
    return 0;
}