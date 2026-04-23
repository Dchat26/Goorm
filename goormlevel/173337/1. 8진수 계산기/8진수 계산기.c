#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int val = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &val) != 1) break;
		sum += val;
	}

	printf("%o\n", sum);

	return 0;
}