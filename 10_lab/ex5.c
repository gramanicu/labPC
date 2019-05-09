#include <stdio.h>
#include <string.h>
#include <memory.h>

#define MAX 10000

void inlocuieste(char * sursa, char * cauta, char * secventa);

int main() {
    char s[MAX], cauta[MAX], secventa[MAX];
    fgets(s, MAX, stdin);
    scanf("%s", cauta);
    scanf("%s", secventa);
    inlocuieste(s, cauta, secventa);
    puts(s);
}

void inlocuieste(char * sursa, char * cauta, char * secventa) {
    char *p = strstr(sursa, cauta);
    int pos = (int)(p - sursa +1);
    int i=0;
    long int sizeR = strlen(cauta);
    long int sizeSec = strlen(secventa);
    long int sizeS = strlen(sursa);


    if(sizeR>sizeSec) {
        for(long k=0; k < sizeR-sizeSec; k++) {
            i=0;
            while((pos+i)!=sizeS ){
                *(sursa+pos+i-1) = *(sursa+pos+i);
                i++;
            }
        }
    } else {
        memmove(sursa + pos, sursa+pos+sizeR, sizeS - pos);
    }
    memcpy(p, secventa, sizeSec);

    strtok(sursa, "\n");
}

