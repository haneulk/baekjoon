#include <cstdio>
#include <algorithm>
using namespace std;

#define N 1000000
int main() {
	int n, i, MIN, MAX;
	int a[N] = {};
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	MIN = MAX = a[0];
	for (i = 1; i < n; i++) {
		MIN = min(MIN, a[i]);
		MAX = max(MAX, a[i]);
	}
	printf("%d %d\n", MIN, MAX);
	return 0;
}
