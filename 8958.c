#include <stdio.h>
#include <string.h>

int main() {
	int num, i = 0, add = 1, sum = 0;
	char arr[80] = {};

	scanf("%d", &num);
	while (num > 0) {

		scanf("%s", &arr);
		int count = strlen(arr);
		for (i=0; i < strlen(arr); i++) {
			if (arr[i] == 'O') {
				sum += add;
				add++;
			}
			else {
				add = 1;
			}
		}
		printf("%d\n", sum);
		sum = 0;
		add = 1;
		num--;
	}

	return 0;
}
