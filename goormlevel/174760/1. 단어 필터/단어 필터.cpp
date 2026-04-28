#include <iostream>

using namespace std;

int main() {
	int s = 0, e = 0;
	if (!(cin >> s >> e)) return 0;

	char S[10005];
	char E[10005];
	if (!(cin >> S >> E)) return 0;

	char res[10005];
	int top = 0;

	for (int i = 0; i < e; i++) {
		res[top++] = E[i];

		if (top >= s) {
			int is_TF = 1;
			for (int j = 0; j < s; j++) {
				if (res[top - s + j] != S[j]) {
					is_TF = 0;
					break;
				}
			}

			if (is_TF) {
				top -= s;
			}
		}
	}
	res[top] = '\0';

	if (top == 0) {
		cout << "EMPTY\n";
	}
	else cout << res << "\n";

	return 0;
}