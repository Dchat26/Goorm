#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int n = 0, d = 0;
	if (scanf("%d %d", &n, &d) != 2) return 0;

	int* nlist = (int*)malloc(n * sizeof(int));
	if (nlist == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) return 0;
	}

	qsort(nlist, n, sizeof(int), compare);

	int left = 0, right = 0, max_len = 0;
	while (right < n) {
		if (nlist[right] - nlist[left] <= d) {
			max_len = (max_len < right - left + 1) ? right - left + 1 : max_len;
			right++;
		}
		else {
			left++;
		}
	}

	printf("%d\n", n - max_len);

	free(nlist);

	return 0;
}
