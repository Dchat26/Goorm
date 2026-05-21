#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 0;
	if (!(cin >> n)) return 0;

	int nlist[100001];
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	sort(nlist, nlist + n);

	int answer = 0;
	for (int i = 0; i < n / 2; i++) {
		answer += nlist[i] + nlist[n - 1 - i];
	}

	cout << answer << "\n";

	return 0;
}