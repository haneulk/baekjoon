#include <cstdio>
using namespace std;

int main() {
	int E, S, M, count=1;
	int e = 1, s =1, m = 1;
	scanf("%d %d %d", &E, &S, &M);
	while (1) {
		if (E == e && S == s && M == m) break;
		e++;
		s++;
		m++;
		if (e > 15) e = 1;
		if (s > 28) s = 1;
		if (m > 19) m = 1;
		count++;
	}
	printf("%d\n", count);
	return 0;
}
