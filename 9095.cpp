#include <cstdio>
using namespace std;

int main() {
	int a[11] = {};
	int T, n;
	scanf("%d", &T);
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int j = 4; j <= n; j++) {
			a[j] = a[j - 3] + a[j - 2] + a[j - 1];
		}
		printf("%d\n", a[n]);
	}
	return 0;
}
