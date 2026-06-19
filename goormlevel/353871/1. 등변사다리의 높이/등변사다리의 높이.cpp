#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long k, d1, d2;
    if (cin >> k >> d1 >> d2) {
        long long diff = abs(d1 - d2);
        long long answer = (4 * k * k) - (diff * diff);
        
        if (answer < 0) answer = 0;
        
        cout << answer << "\n";
    }
    
    return 0;
}
