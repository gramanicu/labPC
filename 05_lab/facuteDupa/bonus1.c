#include <stdio.h>

#define vectorSize 100

void vectorSum(int a[], int b[], int c[]) {
	
	int i, remainder=0;
	c[0] = a[0];
	for(i=1;i<=a[0];i++) {
		if(b[0]>=i) c[i] = a[i] + remainder + b[i];
		else c[i] = a[i] + remainder;
		remainder=0;
		if(c[i]>=9) {
			c[i]%=10;
			remainder=1;
		}
	}
	if(remainder==1) {
		c[0]++;
		c[c[0]] = 1;
	}
}

void numberToArray(int x, int array[]) {
	int i=1;	
	array[0]=0;	 
	while(x!=0) {
		array[i] = x%10;
		x/=10;
		array[0]++;
		i++;
	}
}

int arrayToNumber(int array[]) {
	int i,n=0;
	for(i=1; i<=array[0]; i++) {
		n = n*10+array[array[0]-i+1];
	}
	return n;
}

void printArrayNumber(int array[]) {
	int i;
	for(i=1; i<=array[0]; i++) {
		printf("%d", array[array[0]-i+1]);
	}
	printf("\n");
}

void printArray(int array[]) {
	int i;	
	for(i=0; i<=array[0]; ++i) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int a[vectorSize], b[vectorSize], m,n,c[vectorSize+1];
	
	scanf("%d", &m);
	scanf("%d", &n);

	numberToArray(m,a);
	numberToArray(n,b);
	vectorSum(a,b,c);

	printArrayNumber(c);

	return 0;
}
