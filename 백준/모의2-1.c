#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[20][101];

	int n, m1, m2;
	scanf("%d %d %d", &n, &m1, &m2);
	getchar();

	for (int i = 0; i < n; i++) {
		gets(str[i]);
	}
	char* maxs, * mins;
	int max = strlen(str[0]);
	int min = strlen(str[0]);
	for (int i = 1; i < n; i++) {
		if (strlen(str[i]) > max) {
			max = strlen(str[i]);
			maxs = str[i];
		}
		if (strlen(str[i]) < min) {
			min = strlen(str[i]);
			mins = str[i];
		}
	}
	printf("%s\n%s\n", maxs, mins);
	char* first, * second;
	int cnt = 0;
	int k = 0,j;
	for (int i = 0; i < strlen(mins); i++) {
		if (mins[i] == ' ') {
			cnt++;
			k = i+1;
		}
		if (cnt == m2) {
			first = mins +k;
		}
	}
	cnt = 0;
	for (int i = 0; i < strlen(maxs); i++) {
		if (maxs[i] == ' ') {
			cnt++;
			k = i + 1;
		}
		if (cnt == m1) {
			second = maxs + k;
		}
	}

	for (int i = 0; i < strlen(first); i++) {
		if (first[i + 1] == ' ' || first[i + 1] == '\0') {
			first[i + 1] = '\0';
			break;
		}
	}
	for (int i = 0; i < strlen(second); i++) {
		if (second[i + 1] == ' ' || second[i + 1] == '\0') {
			second[i + 1] = '\0';
			break;
		}
	}
	char t[201];
	char *tmp;
	
	if (strcmp(first, second) < 0) {
		tmp = strcat(first, second);
	}
	else {
		strcpy(t, first);
		strcpy(first, second);
		strcpy(second, t);
		tmp = strcat(first, second);
	}
	printf("%s", tmp);
	return 0;
}