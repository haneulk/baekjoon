#include <stdio.h>

int main() {
	int i = 10000,j=0, check =0;
	int arr[10001] = {};
	for (j = 0; j < 10001; j++) {
		arr[j] = j;
	}
	while (i>0) {
		check = i + (i/10000) + (i / 1000) + ((i % 1000) / 100) + ((i % 100) / 10) + (i % 10);
		if (check < 10000) {
			arr[check] = 0;
		}
		i--;
	}
	
	for (j = 0; j < 10000; j++) {
		if (arr[j] != 0) {
			printf("%d\n", arr[j]);
		}
	}
	return 0;
}
