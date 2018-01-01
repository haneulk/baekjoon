#include <stdio.h>

int main(void) {
	int count, min, in, arr[10000] = {};
	scanf("%d %d\n", &count, &min);
	for (int i = 0; i<count; i++) {
		scanf("%d", &in);
		if (in>=1 && in <= 10000)
			arr[i] = in;
	}
	for (int i = 0; i<count; i++) {
		if (arr[i] < min){
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
