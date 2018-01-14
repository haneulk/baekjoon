#include <stdio.h>
#include <string.h>

int main() {
	int arr[8] = {}, i=0, check=8;

	for (i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 8; i++) {
		if (arr[i] - 1 == arr[i - 1]){
			check--;
		}
		else if (arr[i - 1] - 1 == arr[i]) {
			check++;
		}
		else {
			check += 10;
		}
	}
	if (check == 1) {
		printf("ascending\n");
	}
	else if (check == 15) {
		printf("descending\n");
	}
	else {
		printf("mixed\n");
	}
	return 0;
}
