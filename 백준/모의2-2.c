#include <stdio.h>
#include <string.h>
#include  <stdlib.h>

int main(void) {
	int n;
	char X[100];
	scanf("%d %s", &n, X);
	getchar();

	char tmpY[100];
	char** Y = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		gets(tmpY);
		Y[i] = (char*)malloc(sizeof(char) * (strlen(tmpY)+1));
		strcpy(Y[i], tmpY);
	}

	char* tmp;

	int k = 0,cnt;
	int maxcnt = 0;
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < strlen(Y[i]); j++) {
			if (Y[i][j] == X[k]) {
				k++;
			}
			else {
				k = 0;
			}
			if (k == strlen(X)) {
				cnt++;
				k = 0;
			}
		}
		if (maxcnt < cnt) {
			tmp = Y[i];
			maxcnt = cnt;
		}
	}
	if (maxcnt == 0) {
		tmp = "NONE";
	}
	printf("%s", tmp);
	for (int i = 0; i < n; i++) {
		free(Y[i]);
	}
	free(Y);

	return 0;
}