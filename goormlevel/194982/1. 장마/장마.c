#include <stdio.h>

int main() {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	int house[1001];
	for (int i = 1; i <= n; i++) {
		if (scanf("%d", &house[i]) != 1) return 0;
	}

	int temp[1001] = {0};
	for (int i = 1; i <= m; i++) {
		int s = 0, e = 0;
		if (scanf("%d %d", &s, &e) != 2) return 0;

		for (int j = s; j <= e; j++) {
			house[j]++;
			temp[j] = 1;
		}

		if (i % 3 == 0) {
			for (int k = 1; k <= n; k++) {
				if (temp[k] == 1) {
					temp[k] = 0;
					house[k]--;
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d", house[i]);
		printf((i == n) ? "\n" : " ");
	}

	return 0;
}