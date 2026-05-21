#include <stdio.h>

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int nlist[100001];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) return 0;
	}

	qsort(nlist, n, sizeof(int), compare);

	int answer = 0;
	for (int i = 0; i < n / 2; i++) {
		answer += nlist[i] + nlist[n - 1 - i];
	}

	printf("%d\n", answer);

	return 0;
}