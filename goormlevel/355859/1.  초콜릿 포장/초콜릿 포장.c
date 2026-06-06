#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *(int*)b - *(int*)a;
}

int main() {
	int j = 0, n = 0;
	if (scanf("%d %d", &j, &n) != 2) return 0;

	int* nlist = (int*)malloc(n * sizeof(int));
	if (nlist == NULL) return -1;

	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (scanf("%d %d", &a, &b) != 2) return 0;

		nlist[i] = a * b;
	}
	qsort(nlist, n, sizeof(int), compare);

	int answer = 0;
	for (int i = 0; i < n; i++) {
		j -= nlist[i];
		answer++;

		if (j <= 0) break;
	}

	if (j <= 0) {
		printf("%d\n", answer);
	}
	else {
		printf("-1\n");
	}

	free(nlist);

	return 0;
}
