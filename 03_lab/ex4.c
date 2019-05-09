#include <stdio.h>

int main() { 
	int nr1, nr2;

	scanf("%d%d", &nr1, &nr2);

	while(nr1!= nr2) {
		if(nr1>nr2) nr1 -= nr2;
		else nr2 -= nr1;
	}

	if(nr1!=1) printf("Cel mai mare divizor comun este: %d\n", nr1);
	else printf("Numerele sunt prime intre ele\n");
	return 0;
	
}
