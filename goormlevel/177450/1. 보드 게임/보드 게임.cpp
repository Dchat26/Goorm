#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	if (n == 1 || n == 2) {
		cout << "1\n";
		return 0;
	}

	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
	}

	cout << dp[n] << "\n";

	return 0;
}