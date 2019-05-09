#include <stdio.h>

#define N 100

int citesteMatrice(int a[N][N], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0, j<m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	return 1;
}

int main() {
	int a[N][N], n, m, x;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &x);
	
	citesteMatrice(a,n,m);

	int i,j,k;
	
	for(i=0;i<n && i<m; i++)

	

	return 0;
}
