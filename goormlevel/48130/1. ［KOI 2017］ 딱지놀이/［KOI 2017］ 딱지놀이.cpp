#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int n = 0;
	if (!(cin >> n)) return 0;

	while (n--) {
		int a = 0;
		if (!(cin >> a)) return 0;

		unordered_map<int, int> alist;
		for (int i = 0; i < a; i++) {
			int numa = 0;
			if (!(cin >> numa)) return 0;

			if (alist[numa]) alist[numa]++;
			else alist[numa] = 1;
		}

		int b = 0;
		if (!(cin >> b)) return 0;

		unordered_map<int, int> blist;
		for (int i = 0; i < b; i++) {
			int numb = 0;
			if (!(cin >> numb)) return 0;

			if (blist[numb]) blist[numb]++;
			else blist[numb] = 1;
		}

		int is_TF = 1;
		for (int i = 4; i > 0; i--) {
			if (alist[i] > blist[i]) {
				cout << "A\n";
				is_TF = 0;
				break;
			}
			else if (alist[i] < blist[i]) {
				cout << "B\n";
				is_TF = 0;
				break;
			}
		}

		if (is_TF) {
			cout << "D\n";
		}
	}

	return 0;
}