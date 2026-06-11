#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x = 0, y = 0;
	if (!(cin >> x >> y)) return 0;

	if ((x * y) % 2 == 0) {
		cout << "E\n";
	}
	else {
		cout << "O\n";
	}

	return 0;
}
