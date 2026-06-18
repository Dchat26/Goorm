#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (!(cin >> a >> b)) return 0;

		m -= a * b;
	}

	if (m < 0) {
		cout << "No\n";
	}
	else {
		cout << m << "\n";
	}

	return 0;
}
