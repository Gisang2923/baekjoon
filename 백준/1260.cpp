#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int n, m, v;
int arr[1001][1001] = { 0 };
bool visited[1001] = { false };
queue<int> q;
void dfs(int value) {
	visited[value] = true;
	cout << value << " ";

	for (int i = 1; i <= n; i++) {
		if (!visited[i] && arr[value][i] == 1){
			dfs(i);
		}
	}
}

void bfs() {
	q.push(v);
	
	while (!q.empty()) {
		int value = q.front();
		visited[value] = true;
		cout << value << " ";
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (!visited[i] && arr[value][i] == 1) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

int main(void) {
	cin >> n >> m >> v;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(v);
	cout << "\n";
	memset(visited, false, sizeof(visited));
	bfs();
	return 0;
}
