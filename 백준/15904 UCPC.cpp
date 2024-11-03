//2022.05.03
//boj preoblem 15904


#include <stdio.h>
#include <string.h>
int main(void) {
	char arr[1001];
	fgets(arr,1001,stdin);

	int cnt = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'U'&&cnt==0) {
			cnt++;
		}
		if (arr[i] == 'C' && cnt == 1) {
			cnt++;
		}
		if (arr[i] == 'P' && cnt == 2) {
			cnt++;
		}
		if (arr[i] == 'C' && cnt == 3) {
			cnt++;
		}
	}
	if (cnt == 4) {
		printf("I love UCPC");
	}
	else {
		printf("I hate UCPC");
	}

	return 0;
}