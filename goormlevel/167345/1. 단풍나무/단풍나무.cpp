#include <iostream>
#include <vector>

using namespace std;

struct Melt {
	int x;
	int y;
	int val;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 0;
	if (!(cin >> n)) return 0;

	vector<vector<int>> nlist(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!(cin >> nlist[i][j])) return 0;
		}
	}

	vector<pair<int, int>> ice;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (nlist[i][j] > 0) {
				ice.push_back({i, j});
			}
		}
	}

	int dh[4] = {1, 0, 0, -1};
	int dw[4] = {0, 1, -1, 0};

	int answer = 0;
	while (!ice.empty()) {
		vector<pair<int, int>> next_ice;
		vector<Melt> melt_info;

		for (const auto& p : ice) {
			int x = p.first;
			int y = p.second;
			
			int count = 0;
			for (int i = 0; i < 4; i++) {
				int row = x + dh[i];
				int col = y + dw[i];

				if ((0 <= row && row < n) && (0 <= col && col < n) && nlist[row][col] == 0) {
					count++;
				}
			}

			if (nlist[x][y] - count > 0) {
				next_ice.push_back({x, y});
				melt_info.push_back({x, y, nlist[x][y] - count});
			}
			else {
				melt_info.push_back({x, y, 0});
			}
		}

		for (const auto& l : melt_info) {
			nlist[l.x][l.y] = l.val;
		}

		ice = next_ice;
		answer++;
	}

	cout << answer << "\n";

	return 0;
}