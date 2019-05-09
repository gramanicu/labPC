#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX 10000

int main() {
    int i=0;
    char s[MAX], *v[MAX];
    char cuv[MAX];
    fgets(s, MAX, stdin);
    fgets(cuv,MAX, stdin);

    v[i] = strtok(s, " \n");
    while(v[i]!=NULL) {
        i++;
        v[i] = strtok(NULL, " \n");
    }

    int counter=0;
    for(int j=0; j<i; j++) {
        if(strcmp(v[j], cuv) == 0) {
            counter++;
        }
    }

    printf("numarul de aparitii al cuvantului este : %d\n", counter);

    return 0;
}