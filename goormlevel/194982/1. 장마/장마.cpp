#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
	
	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	vector<int> house(n + 1);
	for (int i = 1; i <= n; i++) {
		if(!(cin >> house[i])) return 0;
	}

	set<int> temp;
	for (int i = 1; i <= m; i++) {
		int s = 0, e = 0;
		if (!(cin >> s >> e)) return 0;

		for (int j = s; j <= e; j++) {
			house[j]++;
			temp.insert(j);
		}

		if (i % 3 == 0) {
			for (const auto& num : temp) {
				house[num]--;
			}
			temp.clear();
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << house[i] << ((i == n) ? "\n" : " ");
	}

	return 0;
}