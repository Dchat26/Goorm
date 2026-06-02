#include <stdio.h>
#include <string.h>

int main() {
	char s[5005];
	if (fgets(s, sizeof(s), stdin) == NULL) return 0;

	int len = strlen(s);
	int answer[4] = {0};
	
	for (int i = 0; i < len; i++) {
		if (s[i] == '1') answer[0]++;
		else if (s[i] == 'I') answer[1]++;
		else if (s[i] == 'l') answer[2]++;
		else if (s[i] == '|') answer[3]++;
	}

	for (int i = 0; i < 4; i++) {
		printf("%d\n", answer[i]);
	}

	return 0;
}