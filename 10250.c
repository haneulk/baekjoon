#include <cstdio>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);
		n--;
		printf("%d%02d\n", n%h+1, n / h + 1);
	}
	return 0;
}
