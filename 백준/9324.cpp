#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	string message;
	for (int i = 0; i < n; i++) {
		cin >> message;
		bool isOk = true;
		int alpha[26] = { 0 };
		for (int j = 0; j < message.size(); j++) {
			alpha[message[j] - 'A']++;
			if (alpha[message[j] - 'A'] == 3) {
				if (message[j+1]!= message[j]) {
					cout << "FAKE"<<"\n";
					isOk = false;
					break;
				}
				alpha[message[j] - 'A'] -= 4;
			}
		}
		if (isOk) cout << "OK" << "\n";
	}
	return 0;
}