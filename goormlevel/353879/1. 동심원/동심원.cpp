#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 0;
	if (!(cin >> t)) return 0;

	cout << t * t << "\n";

	return 0;
}
