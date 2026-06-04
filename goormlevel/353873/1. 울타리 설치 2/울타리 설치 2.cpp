#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    int answer = 0;

    for (int i = 0; i < n - 1; ++i) {
        int dx = points[i + 1].x - points[i].x;
        int dy = points[i + 1].y - points[i].y;

        answer += hypot(dx, dy);
    }

    int dx_last = points[0].x - points[n - 1].x;
    int dy_last = points[0].y - points[n - 1].y;
    answer += hypot(dx_last, dy_last);

    cout << answer << "\n";

    return 0;
}