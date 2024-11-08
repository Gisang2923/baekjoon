#include <iostream>
#include <algorithm>
using namespace std;
int n;
int color[1001][3] = { 0 };
int cost[3];
int main(void) {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
	
		color[i][0] = min(color[i - 1][1] + cost[1], color[i - 1][2] + cost[2]);
		color[i][1] = min(color[i - 1][0] + cost[0], color[i - 1][2] + cost[2]);
		color[i][2] = min(color[i - 1][0] + cost[0], color[i - 1][1] + cost[1]);
	}

	cout << min(color[n][0],min(color[n][1], color[n][2]));


	return 0;
}