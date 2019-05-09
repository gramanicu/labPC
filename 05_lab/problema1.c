#include <stdio.h>

int searchFor(int nr, int x[], int n) {
	int i;
	for(i=0;i<n;++i) {
		if(x[i]==nr) return i+1;
	}
	return -1;
}

int maxim(int x[], int n) {
	int maxim=x[0], i;
	for(i=0;i<n;++i) {
		if(x[i]>maxim) maxim= x[i];
	}
	return maxim;
}


int minim(int x[], int n) {
	int minim=x[0], i;
	for(i=0;i<n;++i) {
		if(x[i]<minim) minim= x[i];
	}
	return minim;
}

int biggerThan(float nr, int x[], int n) {
	int i, count=0;
	for(i=0;i<n;++i) {
		if(x[i]>nr) count++;
	}
	return count;
	
}

int main() {
	int x[99], n, i, max;
	float s=0;
	scanf("%d", &n);
	for(i=0;i<n;++i) {
		scanf("%d",&x[i]);
		s+=x[i];	
	}
	max = maxim(x,n);	

	printf("min = %d\n", minim(x,n));
	printf("poz_max = %d\n", searchFor(max,x,n));
	printf("ma = %.2f\n", s/n);
	printf("gt_ma = %d\n", biggerThan(s/n,x,n));

	return 0;
}
