#include <stdio.h>
#include <string.h>
int main() {
	int n, i = 0, j = 0, k=0, len=0, count=0, check=0;
	char str[100] = {};

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		check = 0;
		scanf("%s", str);
		len = strlen(str);
		for (j = 0; j < len-1; j++) {
			for (k = j + 1; k < len; k++) {
				if (str[j] == str[k]) {
					if (str[k] != str[k - 1]) {
						check = 1;
					}
				}
			}
		}
		if (check == 0) count++;
	}
	printf("%d\n", count);

	return 0;
}
