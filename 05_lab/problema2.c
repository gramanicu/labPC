#include <stdio.h>

void sellSort(int n, int x[]) {
	int i, min, minPos, posCount=0, aux;
	do {
		min=x[posCount];
		minPos = posCount;
		for(i=posCount;i<n;i++) {
			if(x[i]<min) {
				min = x[i];
				minPos = i;
			}
		}	
		aux = x[posCount];
		x[posCount] = x[minPos];
		x[minPos] = aux;
		posCount++;
			
	} while(posCount<n);
}

int main() {
	int n, i;
	int x[100];
	scanf("%d", &n);

	for(i=0;i<n;i++) {
		scanf("%d", &x[i]);
	}

	sellSort(n,x);	

	for(i=0;i<n;i++) {
		printf("%d ", x[i]);
	}

	printf("\n");
	
	return 0;
}
