#include <stdio.h>
#include <math.h>

int main() { 
	int i, n, ok = 1;
	
	scanf("%d", &n);
		
	if(n>=2) {
		for(i=2; i<=sqrt(n); i++) {	
			if(n % i == 0) {
				ok = 0;
				if(n/i != i) {
					printf("%d si %d \n", i, n/i);
				} else {
					printf("%d \n", i);
				}
			}
		}
	}

	if(ok) {
		printf("Este numar prim\n");
	} 

	return 0;
	
}
