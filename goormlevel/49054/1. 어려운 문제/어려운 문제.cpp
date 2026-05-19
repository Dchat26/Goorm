#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int answer = 1;
	for (int i = 1; i <= n; i++) {
		answer *= i;

		while (answer >= 10) {
			int temp = 0;
			while (answer > 0) {
				temp += answer % 10;
				answer /= 10;
			}
			answer = temp;
		}
	}

	cout << answer << "\n";

	return 0;
}