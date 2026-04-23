#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int nlist[5] = {40, 20, 10, 5, 1};

	int count = 0;
	for (int i = 0; i < 5; i++) {
		count += n / nlist[i];
		n %= nlist[i];
	}

	printf("%d\n", count);

	return 0;
}
