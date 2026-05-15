#include <stdio.h>
#include <math.h>

int main() {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	double salt = 7.0 / 100.0 * n;
	double answer = (salt / (n + m)) * 100;

	answer = floor(answer * 100) / 100.0;

	printf("%.2f\n", answer);

	return 0;
}