#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x = 0, y = 0;
	if (!(cin >> x >> y)) return 0;

	if (x == 0 || y == 0) {
		cout << "0\n";
	}
	else if (x > 0 && y > 0) {
		cout << "1\n";
	}
	else if (x < 0 && y > 0) {
		cout << "2\n";
	}
	else if (x < 0 && y < 0) {
		cout << "3\n";
	}
	else {
		cout << "4\n";
	}

	return 0;
}
