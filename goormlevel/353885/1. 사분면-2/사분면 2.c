#include <stdio.h>

int main() {
	int x = 0, y = 0;
	if (scanf("%d %d", &x, &y) != 2) return 0;

	if (x == 0 || y == 0) {
		printf("0\n");
	}
	else if (x > 0 && y > 0) {
		printf("1\n");
	}
	else if (x < 0 && y > 0) {
		printf("2\n");
	}
	else if (x < 0 && y < 0) {
		printf("3\n");
	}
	else {
		printf("4\n");
	}

	return 0;
}
