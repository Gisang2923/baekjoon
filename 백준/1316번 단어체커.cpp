//2022.05.01
//boj preoblem 1316

#include <stdio.h>

int main(void) {
	int N,j=0;
	int sum;
	char arr[100];
	scanf("%d", &N);
	sum = N;
	for (int i = 0; i < N; i++) {
		char check[26] = { 0, };
		char checkA = '0';

		j = 0;
		scanf("%s", arr);
	
		while (arr[j] != NULL) {
			if (checkA != arr[j]) {
				checkA = arr[j];
				check[arr[j] - 'a'] += 1;
			}
			if (check[arr[j] - 'a'] == 2) {
				sum -= 1;
				break;
			}
			j++;
		}
	}

	
	printf("%d", sum);


	return 0;
}