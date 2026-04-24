#include <stdio.h>

#define MOD 1000000007

int main() {
	int k = 0;
	if (scanf("%d", &k) != 1) return 0;

	 if (k == 1) {
		 printf("0\n");
		 return 0;
	 } 
	 else if (k == 2) {
		 printf("1\n");
		 return 0;
	 }

	 long long prev2 = 0;
	 long long prev1 = 1;
	 long long current = 0;
	 for (int i = 3; i <= k; i++) {
		 current = (prev1 + prev2) % MOD;

		 prev2 = prev1;
		 prev1 = current;
	 }

	 printf("%lld\n", current);

	 return 0;
}