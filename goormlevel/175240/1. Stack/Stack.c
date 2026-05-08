#include <stdio.h>
#include <string.h>

int main() {
	int stack[1001];
	int top = -1;

	int n = 0, k = 0;
	if (scanf("%d %d", &n, &k) != 2) return 0;

	while (n--) {
		char cm[10];
		int num = 0;
		if (scanf("%s", cm) != 1) return 0;

		if (strcmp(cm, "push") == 0) {
			if (scanf("%d", &num) != 1) return 0;

			if (top + 1 < k) stack[++top] = num;
			else printf("Overflow\n");
		}
		else if (strcmp(cm, "pop") == 0) {
			if (top != -1) printf("%d\n", stack[top--]);
			else printf("Underflow\n");
		}
	}

	return 0;
}
