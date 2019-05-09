#include <stdio.h>

int main() { 
	int a, suma = 0;

	while(1) {
		scanf("%d", &a);
		if(a!=-5) {	
			suma += a;
		}
		else { break; }
	}

	printf("Suma numerelor este: %d\n", suma);
	return 0;
	
}
