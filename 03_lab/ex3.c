#include <stdio.h>

int main() { 
	int n, i, maxs = -1, nrmax;

	scanf("%d", &n);

	for(i=1; i<=n; i++) {
		int j, s = 0;

		for(j=1; j<=i; j++) {
			if(i % j == 0) {	
				s += j;
			}
		}

		if(s>=maxs) {
			maxs = s;
			nrmax = i;
		}
	}

	printf("Numarul cu suma divizorilor maxima este: %d\n", nrmax);

	return 0;
	
}
