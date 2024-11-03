#include <cstdio>
using namespace std;
bool check[201][201];

int main(void) {
	int n, m, cnt = 0;
	scanf("%d %d", &n, &m);
	int x, y;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		check[x][y] = true;
		check[y][x] = true;
	}
	for (int i = 1; i <= n-2; i++) {
		for (int j = i + 1; j <= n-1; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (check[i][j] || check[j][k] || check[i][k])
					continue;
				cnt++;
			}

		}
	}
	printf("%d", cnt);
	return 0;
}