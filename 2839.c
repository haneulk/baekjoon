#include <stdio.h>

int main() {
	int in, count = 0;
	scanf("%d", &in);
	while (1) {
		if (in % 5 == 0) {
			printf("%d", in / 5 + count);
			break;
		}
		else {
			if (in <= 0) {
				printf("-1");
				break;
			}
			in -= 3;
			count++;
		}
	}
	return 0;
}
