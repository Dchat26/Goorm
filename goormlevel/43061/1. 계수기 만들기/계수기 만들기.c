#include <stdio.h>

int main() {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int A[8];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &A[i]) != 1) return 0;
	}
	
	int B[8];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &B[i]) != 1) return 0;
	}

	int count = 0;
	if (scanf("%d", &count) != 1) return 0;
	
	for (int i = n - 1; i >= 0; i--) {
		int temp = (B[i] + count) / (A[i] + 1);
		B[i] = (B[i] + count) % (A[i] + 1);
		count = temp;
	}

	char answer[10];
	for (int i = 0; i < n; i++) {
		answer[i] = B[i] + '0';
	}
	answer[n] = '\0';

	printf("%s\n", answer);

	return 0;
}