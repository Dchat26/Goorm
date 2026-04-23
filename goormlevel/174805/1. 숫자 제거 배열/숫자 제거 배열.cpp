#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0;
	string k;
	if (!(cin >> n >> k)) return 0;

	int count = 0;
	for (int i = 0; i < n; i++) {
		string num;
		if (!(cin >> num)) break;

		if (num.find(k) == string::npos) count++;
	}

	cout << count << "\n";

	return 0;
}