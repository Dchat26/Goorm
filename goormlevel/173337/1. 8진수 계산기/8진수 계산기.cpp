#include <iostream>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	int val = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		if (!(cin >> val)) break;
		sum += val;
	}

	cout << oct << sum << "\n";

	return 0;
}