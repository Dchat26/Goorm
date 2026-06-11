#include <stdio.h>

int main() {
	int x = 0, y = 0;
	if (scanf("%d %d", &x, &y) != 2) return 0;

	if ((x * y) % 2 == 0) {
		printf("E\n");
	}
	else {
		printf("O\n");
	}

	return 0;
}
