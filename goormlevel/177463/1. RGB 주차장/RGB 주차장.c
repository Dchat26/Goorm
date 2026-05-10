#include <stdio.h>

#define MOD 100000007

long long power_mod(long long base, long long exp) {
	long long result = 1;
	base = base % MOD;

	while (exp > 0) {
		if (exp % 2 == 1) {
			result = (result * base) % MOD;
		}

		base = (base * base) % MOD;
		exp /= 2;
	} 

	return result;
}

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	if (n == 1) {
		printf("%d\n", 3 % MOD);

		return 0;
	}

	long long answer = (3 * power_mod(2, n - 1)) % MOD;

	printf("%lld\n", answer);

	return 0;
}
