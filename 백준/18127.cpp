#include <iostream>

using namespace std;

int main(void) {
	long long A, B;
	cin >> A >> B;

	long long crystal = 1, sum = A - 2;
	for (int i = 0; i < B; i++) {
		crystal += A - 1;
		A += sum;
	}
	cout << crystal;
	return 0;
}