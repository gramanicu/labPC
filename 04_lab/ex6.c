#include <stdio.h>

int prim(int x) {
	for(int i = 2; i*i<=x; i++) {
		if(x%i == 0) return 0;
	}
	return 1;
}

int distantaNumar(int x, int y) {
	if(x-y<0) return y-x;
	return x-y;
}

int cautaJos(int x) {
	while(x>=2) {
		x--;
		if(prim(x)) return x;	
	}
}

int cautaSus(int x) {
	while(1) {
		x++;
		if(prim(x)) return x;	
	}
}

void celMaiApropiat(int x) {
	int s = 0, j;	
	
	if(x>=2) s = cautaSus(x);
	j = cautaJos(x);
	if(distantaNumar(x,s) > distantaNumar(x,j)) printf("* %d\n", j);
	else if(distantaNumar(x,s) < distantaNumar(x,j)) printf("* %d\n", s);
	else printf("* %d %d\n", j, s);
}

int main() {
	int x;
	scanf("%d", &x);
	while(x>=0) {
		if(prim(x)) printf("* \n");
		else {
			celMaiApropiat(x);	
		}
		
		scanf("%d", &x);
	}
		
	return 0;
}
