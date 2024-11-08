#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int w[101];
int v[101];
int dp[101][100001];

int n, k;

int main(void) {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n;i ++) {
		scanf("%d %d", &w[i], &v[i]);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - w[i] >= 0) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	printf("%d", dp[n][k]);


	return 0;
}