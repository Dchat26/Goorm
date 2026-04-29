#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long evaluate(const char* n) {
	long long stack[20];
	int top = -1;
	char* p = (char*)n;

	long long num = strtoll(p, &p, 10);
	stack[++top] = num;

	while (*p != '\0') {
		char op = *p++;
		long long next_num = strtoll(p, &p, 10);

		if (op == '+') stack[++top] = next_num;
		else if (op == '-') stack[++top] = -next_num;
		else if (op == '*') stack[top] *= next_num;
	}

	long long result = 0;
	for (int i = 0; i <= top; i++) result += stack[i];

	return result;
}

int main() {
	char a[25], b[25];
	if (scanf("%s %s", a, b) != 2) return 0;

	long long resa = evaluate(a);
	long long resb = evaluate(b);

	printf("%lld\n", ((resa > resb) ? resa : resb));

	return 0;
}
