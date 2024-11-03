#include <stdio.h>
#include <string.h>
int main(void) {
	char arr[51];
	char poli[51];
	scanf("%s", arr);
	int cnt = 0;
	bool check = true;
	for (int i = 0; i <= strlen(arr); i++) {
		if (cnt == 4) {
			for (int j = i - 4; j < i; j++) {
				arr[j] = 'A';
			}
			cnt = 0;
		}
		if (cnt == 2) {
			for (int j = i - 2; j < i; j++) {
				arr[j] = 'B';
			}
		}
		if (arr[i] == 'X') {
			cnt++;
		}
		if (arr[i] == '.'||arr[i]==arr[strlen(arr)]) {
			if (cnt % 2 != 0) {
				printf("-1");
				check = false;
			}
			cnt = 0;
		}
	}

	if (check == true) {
		for (int i = 0; i < strlen(arr); i++) {
			printf("%c", arr[i]);
		}
	}


	return 0;
}