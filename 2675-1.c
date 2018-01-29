#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int r, k = 0, n, i = 0, j = 0, length = 0;
	char str[20] = {};
	scanf("%d", &r);
	for (k = 0; k < r; k++) {
		scanf("%d %s", &n, &str);
		length = strlen(str);
		for (i = 0; i < length; i++) {
			for (j = 0; j < n; j++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
