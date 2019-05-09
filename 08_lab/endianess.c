#include <stdio.h>

int main() {
    int x=1;
    if(*(unsigned char*)&x) {
        printf("LSB\n");
    } else {
        printf("MSB\n");
    }
    return 0;
}