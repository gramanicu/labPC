#include <stdio.h>

int main() {
	int nr;
	scanf("%d", &nr);

	if (nr % 15 == 0) {
		printf("FizzBuzz\n");	
	} 
	else if (nr % 3 == 0) {
		printf("Fiz\n");	
	} 
	else if (nr % 5 == 0) {
		printf("Buzz\n");	
	}

	return 0;
}
