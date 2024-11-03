#include <stdio.h>
#include <stdlib.h>

struct bi {
	int n;
	int index;
};

int main(void) {
	struct bi b[50];
	struct bi tmp;
	int result[50];
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i].n);
		b[i].index = i;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i-1; j++) {
			if (b[j].n > b[j + 1].n) {
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		result[b[i].index] = i;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}