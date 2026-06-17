#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long MOD = 1000000007;

    long long sum_linear;
    if (n % 2 == 0) {
        sum_linear = ((n / 2) % MOD) * ((n + 1) % MOD);
    } else {
        sum_linear = (n % MOD) * (((n + 1) / 2) % MOD);
    }
    sum_linear %= MOD;

    long long answer = (sum_linear * sum_linear) % MOD;

    cout << answer << "\n";

    return 0;
}
