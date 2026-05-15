#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	while (n--) {
		int x = 0, y = 0, sec = 0;
		if (scanf("%d %d %d", &x, &y, &sec) != 3) return 0;

		if (x < 0) x = -x;
		if (y < 0) y = -y;

		if ((x + y) <= sec && (sec - (x + y)) % 2 == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}
