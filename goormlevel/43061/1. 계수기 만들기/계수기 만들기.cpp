#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int A[8];
	for (int i = 0; i < n; i++) {
		if (!(cin >> A[i])) return 0;
	}
	
	int B[8];
	for (int i = 0; i < n; i++) {
		if (!(cin >> B[i])) return 0;
	}

	int count = 0;
	if (!(cin >> count)) return 0;

	for (int i = n - 1; i >= 0; i--) {
		int temp = (B[i] + count) / (A[i] + 1);
		B[i] = (B[i] + count) % (A[i] + 1);

		count = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << B[i];
	}
	cout << "\n";

	return 0;
}