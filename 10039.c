#include <stdio.h>

int main() {
	int arr[5] = {}, i=0, sum=0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 40) {
			arr[i] = 40;
		}
		sum += arr[i];
	}
	printf("%d\n", sum / 5);
	return 0;
}
