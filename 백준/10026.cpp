#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

char colors[101][101];
bool visited[101][101] = {false,};
string input;
int n, result =0;
bool isInArray(int x, int y) {
	if (x >= 0 && y >= 0 && x < n && y < n)return true;
	return false;
}
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
void change() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (colors[i][j] == 'R') {
				colors[i][j] = 'G';
			}
		}
	}
	result = 0;
}
void dfs(int x,int y) {
	if (visited[x][y])return;

	visited[x][y] = true;
	
	for (int i = 0; i < 4; i++) {
		int newX = x + dx[i];
		int newY = y + dy[i];

		if (isInArray(newX, newY) && colors[newX][newY] == colors[x][y] && !visited[newX][newY]) {
			dfs(newX, newY);
		}
	}
}

int main(void){
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < n; j++) {
			colors[i][j] = input[j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				result++;
			}
		}
	} 
	cout << result<<" ";
	memset(visited, false, sizeof(visited));
	change();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				result++;
			}
		}
	}
	cout << result;
	return 0;
}