#include <stdio.h>
#include <string.h>

int main() {
	int s = 0, e = 0;
	if (scanf("%d %d", &s, &e) != 2) return 0;

	char S[10005];
	char E[10005];
	if (scanf("%s %s", &S, &E) != 2) return 0;

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
		printf("EMPTY\n");
	}
	else {
		printf("%s\n", res);
	}

	return 0;
}
