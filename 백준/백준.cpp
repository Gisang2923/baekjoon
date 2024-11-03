#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio;
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b;
	
	c = a ^ b;
	cout << c;

	return 0;
}