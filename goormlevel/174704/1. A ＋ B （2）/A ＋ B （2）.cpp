#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	cout << fixed << setprecision(6) << a + b << "\n";

	return 0;
}