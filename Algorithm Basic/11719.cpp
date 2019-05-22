#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	char c;
	while ((c = getchar()) && c != EOF) {
		printf("%c", c);
	}
	return 0;
}
