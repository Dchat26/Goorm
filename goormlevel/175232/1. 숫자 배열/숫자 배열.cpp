#include <iostream>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	for (int i = 1; i <= n * n; i++) {
		cout << i << ((i % n == 0) ? "\n" : " ");
	}

	return 0;
}