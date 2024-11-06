#include <iostream>
#include <vector>
#include <queue>
#include <cstring> // For memcpy
using namespace std;

int n, m, result = 0;
int lab[9][9];
int copylab[9][9];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

bool isInLab(int x, int y) {
    return (y >= 0 && y < n && x >= 0 && x < m);
}

void bfs() {
    int tempLab[9][9];
    memcpy(tempLab, lab, sizeof(lab));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tempLab[i][j] == 2) {
                q.push({ j, i });
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newx = x + dx[i];
            int newy = y + dy[i];
            if (isInLab(newx, newy) && tempLab[newy][newx] == 0) {
                tempLab[newy][newx] = 2;
                q.push({ newx, newy });
            }
        }
    }

    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tempLab[i][j] == 0) {
                temp++;
            }
        }
    }
    result = max(result, temp);
}

void wall(int count) {
    if (count == 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << lab[i][j] << " ";
            }
            cout << "\n";
        }cout << "\n";
        bfs();
        return;
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (lab[i][j] == 0) {
                    lab[i][j] = 1;
                    wall(count + 1);
                    lab[i][j] = 0;
                }
            }
        }
    }
}

int main(void) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> copylab[i][j];
        }
    }

    memcpy(lab, copylab, sizeof(copylab));
    wall(0);
    cout << result;
    return 0;
}
