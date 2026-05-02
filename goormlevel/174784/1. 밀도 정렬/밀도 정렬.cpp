#include <iostream>
using namespace std;
int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	int answer = 0;
	double maxval = -1.0;
	int weight = 0;
	for (int i = 1; i <= n; i++) {
		int w = 0, v = 0;
		if (!(cin >> w >> v)) return 0;

		double m = (double)w / v;

		if (maxval < m) {
			maxval = m;
			answer = i;
			weight = w;
		}
		else if (maxval == m) {
			if (weight < w) {
				weight = w;
				answer = i;
			}
		}
	}

	cout << answer << "\n";

	return 0;
}