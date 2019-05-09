#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX 10000

void ordCresc(char *vectorschar[], int n);

int main() {
    int i=0;
    char s[MAX], *v[MAX];
    fgets(s, MAX, stdin);

    v[i] = strtok(s, " \n");
    while(v[i]!=NULL) {
        i++;
        v[i] = strtok(NULL, " \n");
    }

    ordCresc(v, i);

    for(int j=0; j<i; j++) {
        puts(v[j]);
    }
}

void ordCresc(char *vectorschar[], int n) {
    int ok = 1;
    while(ok) {
        ok=0;
        for(int i=0; i < n - 1; i++) {
            if(strlen(vectorschar[i]) > strlen(vectorschar[i+1])) {
                char *aux;
                aux = vectorschar[i];
                vectorschar[i] = vectorschar[i+1];
                vectorschar[i+1] = aux;
                ok = 1;
            }
        }
    }

    char aux[MAX];
    long int lungime=0;
    long int last=0;
    for(int i=0; i<n; i++) {
        lungime+=strlen(vectorschar[i]);
        memcpy(aux + last, vectorschar[i], strlen(vectorschar[i]));
        last = strlen(vectorschar[i])+1;
    }
    memcpy(vectorschar[0], aux, lungime);
}