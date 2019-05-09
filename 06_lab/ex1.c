#include <stdio.h>

#define N 100
#define M 100


int citesteMatrice(int a[N][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}

int inmultireMatrici( int a[N][M], int b[N][M], int rez[N][M], int n1, int m1, int n2, int m2) {
    if(m1!=n2) { 
        return 0;
    }
    else {
        int r, i, j;
        for(i=0; i<n1; i++) {
            for(j=0; j<m2; j++) { 
                for(r=0; r<m1; r++) {
                    rez[i][j] += a[i][r] * b[r][j];
                }
            }
        }
    }
    return 1;
}

int afiseazaMatrice(int a[N][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
	int matrice1[N][M], matrice2[N][M], rez[N][M]={0};
	int linii1, coloane1, linii2, coloane2;
	
	scanf("%d", &linii1);
	scanf("%d", &coloane1);
	citesteMatrice(matrice1,linii1,coloane1);
	
	scanf("%d", &linii2);
	scanf("%d", &coloane2);
	citesteMatrice(matrice2,linii2,coloane2);
	
	if(!inmultireMatrici(matrice1,matrice2,rez,linii1,coloane1,linii2,coloane2)) {
	    printf("Nu se poate face inmultirea\n");
	} else {
	    afiseazaMatrice(rez,linii1,coloane2);
	}
	
	return 0;
	
}
