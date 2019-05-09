#include <stdio.h>

int power(int x,int y) {
	if(y!=1) return x*power(x,y-1);
	else return x;
}

int main() {
	int x,y;
	scanf("%d%d", &x, &y);
	printf("%d\n", power(x,y));
	return 0;
}
