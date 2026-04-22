#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> meetings(n);
    for (int i = 0; i < n; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }

    sort(meetings.begin(), meetings.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first; 
        }
        return a.second < b.second; 
    });

    int answer = 0;
    int current_end = -1;
	
    for (int i = 0; i < n; i++) {
        if (current_end <= meetings[i].first) {
            answer++;
            current_end = meetings[i].second + 1;
        }
    }

    cout << answer << "\n";

    return 0;
}