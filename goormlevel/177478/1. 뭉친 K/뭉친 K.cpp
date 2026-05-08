#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int target_k = matrix[r - 1][c - 1];

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    int max_group_size = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == target_k && !visited[i][j]) {

                queue<pair<int, int>> q;
                q.push({ i, j });
                visited[i][j] = true;

                int current_group_size = 0;

                while (!q.empty()) {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();

                    current_group_size++;

                    for (int d = 0; d < 4; d++) {
                        int nx = cx + dx[d];
                        int ny = cy + dy[d];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            if (!visited[nx][ny] && matrix[nx][ny] == target_k) {
                                visited[nx][ny] = true;
                                q.push({ nx, ny });
                            }
                        }
                    }
                }
                max_group_size = max(max_group_size, current_group_size);
            }
        }
    }

    cout << max_group_size << "\n";

    return 0;
}