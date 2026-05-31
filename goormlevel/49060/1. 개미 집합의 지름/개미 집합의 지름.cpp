#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, d = 0;
	if (!(cin >> n >> d)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	sort(nlist.begin(), nlist.end());

	int left = 0, right = 0, max_len = 0;
	while (right < n) {
		if (nlist[right] - nlist[left] <= d) {
			max_len = max(max_len, right - left + 1);
			right++;
		}
		else {
			left++;
		}
	}

	cout << n - max_len << "\n";

	return 0;
}