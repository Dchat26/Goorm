#include <stdio.h>

int main() {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (scanf("%d %d", &a, &b) != 2) return 0;

		m -= a * b;
	}

	if (m < 0) {
		printf("No\n");
	}
	else {
		printf("%d\n", m);
	}

	return 0;
}
