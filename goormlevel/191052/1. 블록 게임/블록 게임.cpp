#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int size = 2 * n + 1;
    vector<vector<int>> nlist(size, vector<int>(size, 0));
    nlist[n][n] = 1;

    string d;
    cin >> d;

    int len = d.length();
    vector<int> s(len);
    for (int i = 0; i < len; i++) {
        cin >> s[i];
    }

    vector<pair<int, int>> temp;
    temp.push_back({ n, n });

    int x = n, y = n;

    for (int i = 0; i < len; i++) {
        char c = d[i];
        int score = s[i];

        int nx = x, ny = y;
        if (c == 'L') nx--;
        else if (c == 'R') nx++;
        else if (c == 'U') ny++;
        else if (c == 'D') ny--;

        if (nlist[nx][ny] == 0) {
            temp.push_back({ nx, ny });
            nlist[nx][ny] = score;
            x = nx;
            y = ny;
        }
        else {
            while (!temp.empty()) {
                pair<int, int> a = temp.back();
                temp.pop_back();

                int ax = a.first;
                int ay = a.second;

                if (ax == nx && ay == ny) {
                    nlist[ax][ay] = score;
                    temp.push_back({ ax, ay });
                    x = nx;
                    y = ny;
                    break;
                }
                else {
                    nlist[ax][ay] = 0;
                }
            }
        }
    }

    long long total_score = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            total_score += nlist[i][j];
        }
    }

    cout << total_score << "\n";

    return 0;
}