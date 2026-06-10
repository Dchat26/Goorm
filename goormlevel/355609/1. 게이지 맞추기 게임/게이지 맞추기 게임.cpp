#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int d = 0, l = 0, r = 0;
	if (!(cin >> d >> l >> r)) return 0;

	int target = 0;
	while (target < l) {
		target += d;
	}

	if (target >= l && target <= r) {
		cout << "Y\n";
	}
	else {
		cout << "N\n";
	}

	return 0;
}
