#include <iostream>

#define MOD 1000000007

using namespace std;

int main() {
	int k = 0;
	if (!(cin >> k)) return 0;

	if (k == 1) {
		cout << "0\n";
		return 0;
	}
	else if (k == 2) {
		cout << "1\n";
		return 0;
	}

	long long prev2 = 0;
	long long prev1 = 1;
	long long current = 0;
	for (int i = 3; i <= k; i++) {
		current = (prev1 + prev2) % MOD;
		prev2 = prev1;
		prev1 = current;
	}

	cout << current << "\n";

	return 0;
}