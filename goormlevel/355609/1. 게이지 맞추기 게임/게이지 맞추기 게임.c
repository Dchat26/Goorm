#include <stdio.h>

int main() {
	int d = 0, l = 0, r = 0;
	if (scanf("%d %d %d", &d, &l, &r) != 3) return 0;

	int target = 0;
	while (target < l) {
		target += d;
	}

	if (target >= l && target <= r) {
		printf("Y\n");
	}
	else {
		printf("N\n");
	}

	return 0;
}
