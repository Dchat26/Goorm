#include <iostream>
#include <cctype>

using namespace std;

int main() {
	int n = 0;
	char answer[10005];
	if (!(cin >> n >> answer)) return 0;

	for (auto& c : answer) {
		if (islower(c)) {
			c = toupper(c);
		}
		else {
			c = tolower(c);
		}
	}

	cout << answer << "\n";

	return 0;
}