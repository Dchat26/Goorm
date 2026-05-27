#include <stdio.h>

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    long long MOD = 100000007;
    
    long long a = 1, b = 1, c = 1, d = 1;

    for (int i = 1; i < n; i++) {
        long long next_a = (a + 2 * b + c + d) % MOD;
        long long next_b = (a + b + c) % MOD;
        long long next_c = (a + 2 * b + d) % MOD;
        long long next_d = (a + c) % MOD;

        a = next_a;
        b = next_b;
        c = next_c;
        d = next_d;
    }

    printf("%lld\n", (a + 2 * b + c + d) % MOD);

    return 0;
}