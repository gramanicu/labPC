#include <stdio.h>

int subsirMax(int x[], int n) 
{ 
    int sumaMaxima = x[0], max = 0; 
  
    for (int i=0;i<n;i++) 
    { 
        max = max + x[i]; 
        if (sumaMaxima < max) sumaMaxima = max; 
        if (max < 0) max = 0; 
    } 
    return sumaMaxima; 
} 

int main() {
	int n, x[100],i;
	
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d", &x[i]);
	}	

	printf("%d\n", subsirMax(x,n));

	return 0;
}
