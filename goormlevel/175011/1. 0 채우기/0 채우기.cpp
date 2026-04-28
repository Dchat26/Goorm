#include <iostream>

using namespace std;

int main() {
	int arr[100][100];
	int row[100] = {0};
	int col[100] = {0};

	int n = 0;
	if (!(cin >> n)) return 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!(cin >> arr[i][j])) return 0;

			row[i] += arr[i][j];
			col[j] += arr[i][j];
		}
	}

	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) {
				answer += row[i] + col[j];
			}
		}
	}

	cout << answer << "\n";

	return 0;
}