#include <stdio.h>
#include <string.h>

int main() {
	char arr[1000000] = {};
	int count = 0;

	gets(arr);
	char *ptr = strtok(arr, " ");
	while (ptr != NULL) {
		count++;
		ptr = strtok(NULL, " ");
	}
	printf("%d\n", count);
	return 0;
}
