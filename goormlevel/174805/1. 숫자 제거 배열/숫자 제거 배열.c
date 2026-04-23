#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 0;
	char k[5];
	if (scanf("%d %s", &n, k) != 2) return 0;

	int count = 0;
	for (int i = 0; i < n; i++) {
		char num[10];
		if (scanf("%s", num) != 1) break;

		if (strstr(num, k) == NULL) count++;
	}

	printf("%d\n", count);

	return 0;
}