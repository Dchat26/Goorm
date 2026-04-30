#include <stdio.h>

int main() {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	for (int i = 0; i < n; i++) {
		int temp = 0;
		if (scanf("%d", &temp) != 1) return 0;

		if (temp % m == 0) printf("%d", temp);
		else printf("%d", temp * m);

		if (i == n - 1) printf("\n");
		else printf(" ");
	}

	return 0;
}