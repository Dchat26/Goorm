#include <iostream>

using namespace std;

int main() {
	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	while (n--) {
		int temp = 0;
		if (!(cin >> temp)) return 0;

		if (temp % m == 0) cout << temp;
		else cout << temp * m;

		if (n == 1) cout << "\n";
		else cout << " ";
	}

	return 0;
}