#include <iostream>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	int nlist[5] = {40, 20, 10, 5, 1};

	int count = 0;
	for (int i : nlist) {
		count += n / i;
		n %= i;
	}

	cout << count << "\n";

	return 0;
}
