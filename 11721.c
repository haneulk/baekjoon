#include <stdio.h>
#include <string.h>

int main() {
	char in[100] = {};
	int i, count=0;

	scanf("%s", in);
	count = strlen(in);

	for (i = 0; i < count; i++) {
		printf("%c", in[i]);
		if ((i+1) % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}
