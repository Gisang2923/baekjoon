#include <iostream>
#include <cmath>

using namespace std;

int n, cnt = 0;
int col[16] = { 0 };

void nQueen(int level){
	if (level == n) {
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			col[level] = i;
			bool check = true;
			for (int j = 0; j < level; j++) {
				if (col[level] == col[j] || abs(col[level] - col[j]) == level - j) {
					check = false;
					break;
				}
			}
			if (check) {
				cout << level << " " << col[level]<<"\n";
				nQueen(level + 1);
			}
		}
	}
}
int main(void) {
	cin >> n;
	nQueen(0);
	cout << cnt;

	return 0;
}