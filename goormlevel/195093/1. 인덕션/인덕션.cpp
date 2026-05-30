#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int get_dist(int a, int b) {
    int diff = abs(a - b);
    return min(diff, 10 - diff);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> targets(n);
    for (int i = 0; i < n; i++) {
        cin >> targets[i];
    }

    vector<vector<int>> dp(10, vector<int>(10, INF));
    dp[0][0] = 0;

    int curr_t = 0;

    for (int target : targets) {
        vector<vector<int>> next_dp(10, vector<int>(10, INF));

        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (dp[j][k] != INF) {
                    int cost = dp[j][k];

                    next_dp[j][k] = min(next_dp[j][k], cost + get_dist(curr_t, target));
                    next_dp[curr_t][k] = min(next_dp[curr_t][k], cost + get_dist(j, target));
                    next_dp[j][curr_t] = min(next_dp[j][curr_t], cost + get_dist(k, target));
                }
            }
        }
        dp = next_dp;
        curr_t = target;
    }

    int answer = INF;
    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 10; k++) {
            answer = min(answer, dp[j][k]);
        }
    }

    cout << answer << "\n";

    return 0;
}