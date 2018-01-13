#include <stdio.h>

int main() {
	int arr[9] = {}, number[10] = {0};
	int a, b, c, total, key=0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	total = a*b*c;
	arr[0] = total / 100000000;
	arr[1] = total / 10000000 % 10;
	arr[2] = total / 1000000 % 10;
	arr[3] = total / 100000 % 10;
	arr[4] = total / 10000 % 10;
	arr[5] = total / 1000 % 10;
	arr[6] = total / 100 % 10;
	arr[7] = total / 10 % 10;
	arr[8] = total % 10;

	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0 && key == 0) key = 1;
		if (key == 1) {
			number[arr[i]] += 1;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", number[i]);
	}
	return 0;
}
