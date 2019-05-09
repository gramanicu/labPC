#include <stdio.h>

#define N 100


int citesteMatrice(int a[N][N], int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}

int matriceUnitate(int a[N][N], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        a[i][i] = 1;
    }
    return 0;
}

int egalareMatrice(int sursa[N][N], int target[N][N], int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            target[i][j] = sursa[i][j];
        }
    }
    return 0;
}

int ridicarePutere( int a[N][N], int rez[N][N], int n, int putere) {  
    int aux[N][N] = {0};
    egalareMatrice(a,aux,n);
    putere--;
    while (putere) {
        int r, i, j;
        
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                rez[i][j] = 0; 
                for(r=0; r<n; r++) {
                    rez[i][j] += aux[i][r] * a[r][j];
                }
            }
        }
        egalareMatrice(rez, aux, n);
        putere--;
    }
    return 1;
}

int afiseazaMatrice(int a[N][N], int n) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
	int mat[N][N], rez[N][N]={0};
	int n, putere;
	
	scanf("%d", &n);
	citesteMatrice(mat,n);
    scanf("%d", &putere);
	ridicarePutere(mat,rez,n,putere);
	afiseazaMatrice(rez,n);

	return 0;
	
}
