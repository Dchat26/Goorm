#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n = 0, m = 0;
	if (!(cin >> n >> m)) return 0;

	double salt = 7.0 / 100.0 * n;

	double answer = (salt / (n + m)) * 100.0;

	answer = floor(answer * 100) / 100.0;

	cout << fixed << setprecision(2) << answer << "\n";

	return 0;
}