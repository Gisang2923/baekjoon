#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct tomato {
	int y, x;
};
queue<tomato> q;

int m, n, result = 0;

vector<vector<int>> plate;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

bool isInside(int ny, int nx) {
	return (0 <= nx && 0 <= ny && ny < n && nx < m);
}

void bfs() {
	while (!q.empty()) {
		int y = q.front().y;
		int x = q.front().x;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (isInside(ny, nx) == 1 && plate[ny][nx] == 0) {
				plate[ny][nx] = plate[y][x] + 1;
				q.push({ ny,nx });
			}
		}
	}
}
int main(void) {
	cin >> m >> n;

	int condition;
	for (int i = 0; i < n; i++) {
		vector<int> line;
		for (int j = 0; j < m; j++) {
			cin >> condition;
			if (condition == 1) q.push({ i,j });
			line.push_back(condition);
		}
		plate.push_back(line);
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (plate[i][j] == 0) {
				cout << "-1\n";
				return 0;
			}
			if (result < plate[i][j]) {
				result = plate[i][j];
			}
		}
	}
	cout << result-1;


	return 0;
}