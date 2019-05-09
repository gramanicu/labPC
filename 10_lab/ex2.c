#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX 10000

void eliminaSpatii(char * sursa);
int isPalindrom(char * sursa);

int main() {
    char s[MAX];
    fgets(s, MAX, stdin);
    eliminaSpatii(s);
    if(isPalindrom(s)) {
        printf("este palindrom\n");
    } else {
        printf("nu este palindrom\n");
    }
    return 0;
}

void eliminaSpatii(char * sursa) {
    char* i = sursa;
    char* j = sursa;
    while(*j != 0) {
        *i = *j++;
        if(*i != ' ') {
            i++;
        }
    }
    *i = 0;
}

int isPalindrom(char * sursa) {
    long int l = strlen(sursa) - 1;
    int ok=1;
    for(int i=0; i<(l/2+l%2); i++) {
        if(*(sursa+i) != *(sursa+(l-i-1))) {
            ok=0;
        }
    }
    return ok;
}