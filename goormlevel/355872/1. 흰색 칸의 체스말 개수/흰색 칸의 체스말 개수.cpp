#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> chessmap(8);
	for (int i = 0; i < 8; i++) {
		if (!(cin >> chessmap[i])) return 0;
	}

	int answer = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chessmap[i][j] == '1') {
				answer++;
			}
		}
	}

	cout << answer << "\n";

	return 0;
}
