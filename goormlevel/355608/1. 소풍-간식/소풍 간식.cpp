#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int a = n / 2;
	int b = n - a;

	cout << a * b << "\n";

	return 0;
}
