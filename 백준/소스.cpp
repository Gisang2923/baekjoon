#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	char arr[4];
	char xarr[3];
	for (int i = 0; i < 3; i++) {
		xarr[i] = '_';
	}
	scanf("%s", &arr);
	getchar();

	int cnt = 0;
	char x;
	for (int j = 0; j < 5; j++) {
		scanf("%c",&x);
		getchar();

		for (int i = 0; i < 3; i++) {
			if (x == arr[i]) {
				xarr[i] = x;
				cnt++;
				break;
			}
		}
		for (int k = 0; k < 3; k++) {
			printf(" %c", xarr[k]);
		}
		if (cnt == 3) {
			exit(0);
		}
		printf("\n");
	}

	return 0;
}