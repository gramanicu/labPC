#include <stdio.h>

int invers(int x) {
	int y = 0;
	while(x) {
		y  = y*10 + x%10;
  		x /= 10;	
	}
	return y;
}

int palindrome(int x) {
	return x==invers(x);
}

int nextPalindrome(int x) {
	int next=1, i=x;	

	while(next) {
		i++;
		if(palindrome(i)) {
			return i;					
		}
	} 
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", nextPalindrome(x));	
	return 0;
}
