#include <stdio.h>

void diferentaVectori(int m, int n, int a[], int b[]) {
	int exista = 0;	

	printf("Rezultat = [");

	for(i=0;i<m;i++) {
		exista=0;

		for(j=0;j<n;j++) {
			if(a[i]==b[j]) { exista=1; break; }
		}
		
		if(!exista) printf("%d ", a[i]);
	}

	printf("]\n");
}

int main() {
	int m,n,a[100],b[100],i,j;
	
	scanf("%d", &m);
	for(i=0;i<m;i++) {
		scanf("%d", &a[i]);
	}	

	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d", &b[i]);
	}	
	
	diferentaVectori(m,n,a[],b[]);	

	return 0;
}
