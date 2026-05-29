#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> p(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    vector<int> dp(n + 2, INF);
    dp[0] = 0;

    for (int i = 1; i <= n + 1; i++) {
        int min_val = INF;

        if (i >= 1) min_val = min(min_val, dp[i - 1]);
        if (i >= 2) min_val = min(min_val, dp[i - 2]);
        if (i >= 3) min_val = min(min_val, dp[i - 3]);

        dp[i] = min_val + p[i];
    }

    cout << dp[n + 1] << "\n";

    return 0;
}