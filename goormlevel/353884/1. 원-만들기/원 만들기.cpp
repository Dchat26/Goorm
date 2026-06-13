#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	int answer = min(a, b);

	cout << answer << "\n";

	return 0;
}
