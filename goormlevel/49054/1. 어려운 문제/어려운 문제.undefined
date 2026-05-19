#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	long long answer = 1;
	for (int i = 1; i <= n; i++) {
		answer *= i;

		while (answer >= 10) {
			long long temp = 0;
			while (answer > 0) {
				temp += answer % 10;
				answer /= 10;
			}

			answer = temp;
		}
	}

	printf("%lld\n", answer);

	return 0;
}