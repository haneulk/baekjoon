#include <stdio.h>
#include <string.h>

int main() {
	char input;
	input = getchar();
	while (input != -1) {
		putchar(input);
		input = getchar();
	}
	return 0;
}
