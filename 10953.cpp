#include <cstdio>
using namespace std;

int main() {
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { 
		scanf("%d, %d", &a, &b);
		if (a == 0 && b == 0) break;
		printf("%d\n", a + b);
	}
	return 0;
}
