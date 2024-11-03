#include <iostream>
#define MAX_SIZE 20
using namespace std;

int gameBoard[MAX_SIZE][MAX_SIZE];


void Move() {

}

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> gameBoard[i][j];
		}
	}

	return 0;
}