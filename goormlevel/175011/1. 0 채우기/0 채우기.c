#include <stdio.h>

int main() {
	int arr[100][100];
	int row[100] = {0};
	int col[100] = {0};

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (scanf("%d", &arr[i][j]) != 1) return 0;

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

	printf("%d\n", answer);

	return 0;
}