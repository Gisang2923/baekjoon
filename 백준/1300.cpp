#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
bool num[10] = { 0, };

bool isValid(int x) {
	string c = to_string(x);
	for (int i = 0; i < c.size(); i++) {
		if (num[c[i] - 48]) return false;
	}
	return true;
}

int main(void) {
	cin.tie(NULL); 
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, m, w =1;
	cin >> n >> m;

	int result = abs(100 - n);
	int invalid;
	for (int i = 0; i < m; i++) {
		cin >> invalid;
		num[invalid] = true;
	}

	if (n == 100) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < 1000000; i++) {
		if (isValid(i)) {
			int temp = abs(n - i) + to_string(i).size();
			result = min(temp, result);
		}
	}
	cout << result;

	return 0;
}