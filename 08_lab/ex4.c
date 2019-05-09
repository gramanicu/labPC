#include <stdio.h>

void strdel(char *s,int p, int k) {
    char *destinatie = s + p, *sursa = s + p + k, *capat = s;
    int pos = 0, parcurs=0;
    while(*(s+pos)!='\0') {
        pos++;
    }
    pos--;
    
    int i=0;
    if(p+k < pos) {
        while(*(s + p + k + i) && (p + k + i < pos)) { 
            *( s + p + i) = * ( s + p + k + i);
            parcurs = 1;
            i++;
        }
    }
    else {
        //stergea tuturor caracterelor ramase
        int j;
        for(j=p ; j<=pos+1 ; j++) {
            *(s + j) = 0;
        }
        *(s + p) = '\0';
    }
    if(parcurs) {
        int j;
        for(j=p+i;j<=pos+1;j++) {
            *(s + j ) = 0;
        }
        *(s + p + i) = '\0';
    }
}

int main() {
    char s[100] = {};
    fgets(s, 100, stdin);
    strdel(s, 7, 10000);
    printf("%s\n", s);
}