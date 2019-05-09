#include <stdio.h>
#include <math.h>

int main() { 
	int i, n, s = 0;
	
	scanf("%d", &n);
	
	for(i=2; i<=sqrt(n); i++) {	
		if(n % i == 0) {
            if(n/i != i) {
				s+= n/i;
			}
			s+= i;
		}
	}

	printf("Suma divizorilor numarului este: %d\n", s);

	return 0;
	
}
