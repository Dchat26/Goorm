#include <stdio.h>

#define MOD 1000000007

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	if (n == 1 || n == 2) {
		printf("1\n");

		return 0;
	}

	int nlist[100000] = {0};
	nlist[0] = 1;
	nlist[1] = 1;
	nlist[2] = 1;

	for (int i = 3; i <= n; i++) {
		nlist[i] = (nlist[i - 1] + nlist[i - 3]) % MOD;
	}

	printf("%d\n", nlist[n]);

	return 0;
}