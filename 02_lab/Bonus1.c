#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main() {
	int a,b,c, delta;
	scanf("%d%d%d", &a, &b, &c);

	delta = pow(b, 2) - 4 * a * c;

	if(delta < 0) printf("Ecuatia nu are radacini reale\n");
   	else if(delta == 0) {
		printf("Ecuatia are radacina reala: ");
		int x = (-b)/(2 * a);
		printf("%d\n", x);
	}
	else {	
		printf("Ecuatia are doua radacini reale: ");
		int x1 = (-b + sqrt(delta))/(2 * a);
		int x2 = (-b - sqrt(delta))/(2 * a);
		printf("%d si %d\n", x1, x2);
	}

	return 0;
}
