#include <stdio.h>

int main() {
	int lat1,lat2,lat3;
	
	scanf("%d%d%d", &lat1, &lat2, &lat3);
	
	if((lat1 + lat2 > lat3)
	&&(lat2 + lat3 > lat1)
	&&(lat3 + lat1 > lat2)) printf("Este triunghi\n");	
	else printf("Nu poate fi triunghi\n");	

	return 0;
}
