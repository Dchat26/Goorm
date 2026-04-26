#include <iostream>
#include <unordered_set>

using namespace std;
int main() {
	int a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	unordered_set<int> alist;
	for (int i = 1; i <= b; i++) {
		int c = 0;
		if (!(cin >> c)) break;
		
		alist.insert(c);

		if (alist.size() == a) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << "-1\n";
	
	return 0;
}