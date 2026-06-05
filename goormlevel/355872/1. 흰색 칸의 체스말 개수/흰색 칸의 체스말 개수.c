#include <stdio.h>

int main() {
	char chessmap[8][10];
	for (int i = 0; i < 8; i++) {
		if (scanf("%s", &chessmap[i]) != 1) return 0;
	}

	int answer = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chessmap[i][j] == '1') {
				answer++;
			}
		}
	}

	printf("%d\n", answer);

	return 0;
}
