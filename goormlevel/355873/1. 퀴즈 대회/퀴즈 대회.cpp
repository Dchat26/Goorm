#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<int> nlist(n);
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	int answer = 0;
	int score = 0;
	for (const auto& ox : nlist) {
		if (ox == 1) {
			answer += 1 + score;
			score++;
		}
		else {
			score = 0;
		}
	}

	cout << answer << "\n";

	return 0;
}