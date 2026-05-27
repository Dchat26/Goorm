#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

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

    cout << (a + 2 * b + c + d) % MOD << "\n";

    return 0;
}