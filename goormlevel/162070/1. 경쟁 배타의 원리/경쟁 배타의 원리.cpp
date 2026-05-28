#include <iostream>
#include <vector>

using namespace std;

int world[1005][1005]; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        world[x1][y1] += 1;
        world[x2][y1] -= 1;
        world[x1][y2] -= 1;
        world[x2][y2] += 1;
    }

    for (int i = 0; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            world[i][j] += world[i][j - 1];
        }
    }

    for (int j = 0; j <= 1000; j++) {
        for (int i = 1; i <= 1000; i++) {
            world[i][j] += world[i - 1][j];
        }
    }

    int answer = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (world[i][j] == k) {
                answer++;
            }
        }
    }

    cout << answer << "\n";

    return 0;
}