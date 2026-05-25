#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    if (!(cin >> r >> c)) return 0;

    vector<string> grid(r);
    queue<pair<int, int>> q;

    for (int i = 0; i < r; i++) {
        cin >> grid[i];
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '@') {
                q.push({ i, j });
            }
        }
    }

    int dr[4] = { -1, 1, 0, 0 };
    int dc[4] = { 0, 0, -1, 1 };
    int count = 0;

    while (!q.empty()) {
        int level_size = q.size();

        for (int s = 0; s < level_size; s++) {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int dw = a + dr[i];
                int dh = b + dc[i];

                if (dw >= 0 && dw < r && dh >= 0 && dh < c) {
                    if (grid[dw][dh] == '&') {
                        cout << count << "\n";
                        return 0;
                    }
                    else if (grid[dw][dh] == '.') {
                        grid[dw][dh] = '@';
                        q.push({ dw, dh });
                    }
                }
            }
        }
        count++;
    }

    cout << "-1\n";
    return 0;
}