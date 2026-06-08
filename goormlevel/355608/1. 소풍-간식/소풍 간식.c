#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int a = n / 2;
	int b = n - a;

	printf("%d\n", a * b);

	return 0;
}
