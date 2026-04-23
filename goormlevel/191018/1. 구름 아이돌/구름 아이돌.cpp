#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
	
    vector<pair<int, int>> idxlist(n);
    for (int i = 0; i < n; i++) {
        cin >> idxlist[i].first;
        idxlist[i].second = i;   
    }

    sort(idxlist.begin(), idxlist.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    int limit = min(n, 3);
    for (int i = 0; i < limit; i++) {
        cout << idxlist[i].second + 1;
        if (i < limit - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}