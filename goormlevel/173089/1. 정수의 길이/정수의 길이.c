#include <stdio.h>
#include <string.h>

int main() {
	char temp[50];
	if (scanf("%s", temp) != 1) return 0;

	printf("%d\n", strlen(temp));

	return 0;
}