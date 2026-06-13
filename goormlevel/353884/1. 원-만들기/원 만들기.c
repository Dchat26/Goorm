#include <stdio.h>

int main() {
	int a = 0, b = 0;
	if (scanf("%d %d", &a, &b) != 2) return 0;

	int answer = (a < b) ? a : b;

	printf("%d\n", answer);

	return 0;
}
