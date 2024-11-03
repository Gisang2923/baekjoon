#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int l,c;
string s;
char arr[16];

void backTracking(int start,int level) {
	if (level == l) {
		int cnt = 0;
		bool valid = false;
		for (int i = 0; i < l; i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				valid = true;
			}
			else cnt++;
		}
		if (valid&&cnt>=2) cout << s << "\n";
		return;
	}
	for (int i = start; i < c; i++) {
		s.push_back(arr[i]);
		backTracking(i + 1,level+1);
		s.pop_back();
	}
}
int main(void) {
	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + c);
	backTracking(0,0);

	return 0;
}