extern int n;

int sumaCifrelor(int x) {
	n++;
	if(x!=0) return x%10 + sumaCifrelor(x/10);
	else return 0;
}

