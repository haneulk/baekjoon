#include <cstdio>
using namespace std;

int main() {
	int T, A, B;
	int a[1000][2] = {};
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
		printf("%d\n", a[i][0] + a[i][1]);
	}

	return 0;
}
