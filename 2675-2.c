#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int r,n, i = 0, j=0, length=0;
	char str[20] = {};

	scanf("%d", &r);
	for (i = 0; i < r; i++) {
		length = 0;
		scanf("%d %s", &n, str);
		while (str[length] != '\0') {
			for (j = 0; j < n; j++) {
				printf("%c", str[length]);
			}
			length++;
		}
		printf("\n");
	}
	return 0;
}
