#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int result = (2 * n + 1) * (2 * n + 1);

	for (int i = -n; i <= n; i++) {
		if (i == 0) continue;
		for (int j = -n; j <= n; j++) {
			int k = 1 - i - j;
			if (k <= n && k >= -n) result++;
		}
	}

	cout << result;

	return 0;
}