#include <iostream>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	while (n--) {
		int x = 0, y = 0, sec = 0;
		if (!(cin >> x >> y >> sec)) return 0;

		if (x < 0) x = -x;
		if (y < 0) y = -y;

		if ((x + y) <= sec && (sec - (x + y)) % 2 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}