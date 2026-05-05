#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	int nlist[10000];
	for (int i = 0; i < n; i++) {
		if (!(cin >> nlist[i])) return 0;
	}

	int max_val = nlist[0];
	int temp = nlist[0];
	int current = nlist[0];

	for (int i = 1; i < n; i++) {
		if (current + 1 == nlist[i]) {
			temp += nlist[i];
			current = nlist[i];
		}
		else {
			max_val = max(temp, max_val);
			temp = nlist[i];
			current = nlist[i];
		}
	}
	max_val = max(temp, max_val);

	cout << max_val << "\n";

	return 0;
}