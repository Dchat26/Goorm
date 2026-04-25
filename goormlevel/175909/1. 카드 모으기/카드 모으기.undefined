#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 0, b = 0;
	if (scanf("%d %d", &a, &b) != 2) return 0;

	int* temp = (int*)calloc(a + 1, sizeof(int));
	if (temp == NULL) return -1;

	int count = 0;
	for (int i = 0; i < b; i++) {
		int c = 0;
		if (scanf("%d", &c) != 1) break;

		if (temp[c] == 0) {
			count++;
			temp[c]++;
		}

		if (count == a) {
			printf("%d\n", i + 1);

			free(temp);
			return 0;
		}
	}
	printf("-1\n");

	free(temp);
	return 0;
}