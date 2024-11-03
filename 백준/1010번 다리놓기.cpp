//2022.05.02
//boj preoblem 1010

#include <stdio.h>
double factorial(int x) {
	if (x==0) {
		return 1;
	}
	return x * factorial(x - 1);
}
int main(void) {
	int T;
	int N, M;
	double countarr[10000];
	double count;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		count = (double)factorial(M) / (factorial(N) * factorial(M-N));
		countarr[i] = count;
	}
	for (int i = 0; i < T; i++) {
		printf("%.0lf\n", countarr[i]);
	}


	return 0;
}