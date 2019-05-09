#include <stdio.h>

int numarCifre(int x){
	if(x!=0) return 1 + numarCifre(x/10);
	return 0;
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", numarCifre(x));
	return 0;
}
