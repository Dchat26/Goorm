#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

struct Node {
    int priority;
    int a;
    int b;

    bool operator<(const Node& other) const {
        if (priority != other.priority) return priority > other.priority;
        if (a != other.a) return a > other.a;
        return b > other.b;
    }
};

int get_priority(char c) {
    if (c == 'E') return 0;
    if (c == 'P') return 1;
    return 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int W, H;
    if (!(cin >> W >> H)) return 0;

    vector<string> grid(W);
    int start_a = -1, start_b = -1;

    for (int i = 0; i < W; ++i) {
        cin >> grid[i];
        for (int j = 0; j < H; ++j) {
            if (grid[i][j] == 'S') {
                start_a = i;
                start_b = j;
            }
        }
    }

    vector<vector<bool>> visited(W, vector<bool>(H, false));
    visited[start_a][start_b] = true;

    priority_queue<Node> pq;
    int da[] = { -1, 1, 0, 0 };
    int db[] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; ++i) {
        int na = start_a + da[i];
        int nb = start_b + db[i];
        if (na >= 0 && na < W && nb >= 0 && nb < H && !visited[na][nb]) {
            visited[na][nb] = true;
            pq.push({ get_priority(grid[na][nb]), na, nb });
        }
    }

    int danger_point = 0;

    while (!pq.empty()) {
        Node curr = pq.top();
        pq.pop();

        int a = curr.a;
        int b = curr.b;
        char target = grid[a][b];

        if (target == 'E') {
            break;
        }

        int p_count = 0;
        for (int dr = -1; dr <= 1; ++dr) {
            for (int dc = -1; dc <= 1; ++dc) {
                if (dr == 0 && dc == 0) continue;
                int na = a + dr;
                int nb = b + dc;
                if (na >= 0 && na < W && nb >= 0 && nb < H) {
                    if (grid[na][nb] == 'P') {
                        p_count++;
                    }
                }
            }
        }

        if (target == '0') {
            danger_point += p_count;
        }
        else if (target == 'P') {
            danger_point += (p_count - 3);
        }

        for (int i = 0; i < 4; ++i) {
            int na = a + da[i];
            int nb = b + db[i];
            if (na >= 0 && na < W && nb >= 0 && nb < H && !visited[na][nb]) {
                visited[na][nb] = true;
                pq.push({ get_priority(grid[na][nb]), na, nb });
            }
        }
    }

    cout << max(0, danger_point) << "\n";

    return 0;
}