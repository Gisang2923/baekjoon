#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, k, l;
	cin >> n >> k >> l;

	vector<vector<int>> ratings;

	int score,count =0;
	for (int i = 0; i < n; i++) {
		vector<int> teamscore;
		int sum = 0;
		bool flag = true;
		for (int j = 0; j < 3; j++) {
			cin >> score;
			sum += score;
			if (score < l) {
				flag = false;
			}
			teamscore.push_back(score);
		}
		if (sum < k) flag = false;
		if (flag) {
			ratings.push_back(teamscore);
			count++;
		}
	}
	cout << count << "\n";
	for (int i = 0; i < ratings.size(); i++) {
		for (int j = 0; j < 3; j++) {
			cout << ratings[i][j] << " ";
		}
	}
	return 0;
}