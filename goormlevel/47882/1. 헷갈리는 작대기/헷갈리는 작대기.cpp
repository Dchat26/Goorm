#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	if (!getline(cin, s)) return 0;

	cout << count(s.begin(), s.end(), '1') << "\n";
	cout << count(s.begin(), s.end(), 'I') << "\n";
	cout << count(s.begin(), s.end(), 'l') << "\n";
	cout << count(s.begin(), s.end(), '|') << "\n";

	return 0;
}