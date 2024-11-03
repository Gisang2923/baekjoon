#include <iostream>
#include <algorithm>

using namespace std;

int countPoint(string& a) {
	int sum = 0;
	int cummulative = 0;

	for (char &v : a) {
		if (v == 'O') {
			cummulative++;
			sum += cummulative;
		}
		else {
			cummulative = 0;
		}
	}
	return sum;
}
int main(void) {
	string a;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		cout << countPoint(a) << endl;
	}

	return 0;
}