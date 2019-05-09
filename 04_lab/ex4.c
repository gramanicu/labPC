#include <stdio.h>

int inverseaza(int x, int y){
	if(x!=0) {
		return inverseaza(x/10, y*10 + x%10); 
	}
	return y;
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", inverseaza(x,0));
	return 0;
}
