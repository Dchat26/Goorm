#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	char s[10005];
	if (scanf("%d %s", &n, s) != 2) return 0;

	for (int i = 0; i < n; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
		}
		else {
			s[i] = s[i] + 32;
		}
	}

	printf("%s\n", s);

	return 0;
}
