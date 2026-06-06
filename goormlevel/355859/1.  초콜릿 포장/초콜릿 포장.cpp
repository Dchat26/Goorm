#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int j = 0, n = 0;
	if (!(cin >> j >> n)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (!(cin >> a >> b)) return 0;

		nlist[i] = a * b;
	}
	sort(nlist.begin(), nlist.end(), greater<int>());

	int answer = 0;
	for (const auto& num : nlist) {
		j -= num;
		answer++;

		if (j <= 0) break;
	}

	if (j <= 0) {
		cout << answer << "\n";
	}
	else {
		cout << "-1\n";
	}

	return 0;
}
