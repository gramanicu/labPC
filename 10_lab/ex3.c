#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX 10000

int main() {
    int i=0;
    char s[MAX], *v[MAX];
    fgets(s, MAX, stdin);

    v[i] = strtok(s, " \n");
    while(v[i]!=NULL) {
        i++;
        v[i] = strtok(NULL, " \n");
    }

    for(int j=0; j<i; j++) {
        printf("%s\n", v[j]);
    }

    return 0;
}