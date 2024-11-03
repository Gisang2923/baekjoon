#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int tmp;
	int arr[10] = { 3,1,2,6,5,4,9,7,8,10 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return 0;
}