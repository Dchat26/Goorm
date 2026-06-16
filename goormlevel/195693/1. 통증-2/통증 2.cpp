#include <iostream>

using namespace std;

void solve() {
    int n, a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> a >> b)) return;

    int bval = n / b;

    while (bval >= 0) {
        int remains = n - (bval * b);
        
        if (remains % a == 0) {
            int aval = remains / a;
            cout << (bval + aval) << "\n";
            return;
        }
        
        bval--;
    }
    
    cout << "-1\n";
}

int main() {
    solve();
    return 0;
}
