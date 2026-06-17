#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long MOD = 1000000007; 

    long long sumval;

    if (n % 2 == 0) {
        sumval = ((n / 2) % MOD) * ((n + 1) % MOD);
    } else {
        sumval = (n % MOD) * (((n + 1) / 2) % MOD);
    }
    sumval %= MOD;

    long long answer = (sumval * sumval) % MOD;

    printf("%lld\n", answer);

    return 0;
}
