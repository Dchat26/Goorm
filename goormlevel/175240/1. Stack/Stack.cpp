#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<int> s;
	int n = 0, k = 0;
	if (!(cin >> n >> k)) return 0;

	while (n--) {
		string cm;
		if (!(cin >> cm)) return 0;

		if (cm == "push") {
			int num;
			if (!(cin >> num)) return 0;

			if (s.size() < k) {
				s.push(num);
			}
			else {
				cout << "Overflow\n";
			}
		}
		else if (cm == "pop") {
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else {
				cout << "Underflow\n";
			}
		}
	}

	return 0;
}