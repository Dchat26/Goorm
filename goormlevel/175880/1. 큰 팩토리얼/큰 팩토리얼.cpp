#include <iostream>

#define MOD 1000000007

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	long long result = 1;
	for (int i = 1; i <= n; i++) {
		result = (result * i) % MOD;
	}

	cout << result << "\n";

	return 0;
}