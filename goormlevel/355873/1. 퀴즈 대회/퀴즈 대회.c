#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int nlist[100];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) return 0;
	}

	int answer = 0;
	int score = 0;
	for (int i = 0; i < n; i++) {
		if (nlist[i] == 1) {
			answer += 1 + score;
			score++;
		}
		else {
			score = 0;
		}
	}

	printf("%d\n", answer);

	return 0;
}
