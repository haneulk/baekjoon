#include <cstdio>
#include <algorithm>
using namespace std;
#define NUM 987654321
int main() {
	int N;
	int w[11][11] = {};
	int p[10] = {};

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &w[i][j]);
		}
		p[i] = i;
	}
	int result = NUM;
	do {
		int sum = 0, key = 0;
		for (int i = 0; i < N; i++) {
			if (i == N - 1) {	//마지막도시일 경우
				sum += w[p[i]][p[0]];
				if (w[p[i]][p[0]] == 0)  key = 1;
			}
			else {
				sum += w[p[i]][p[i + 1]];
				if (w[p[i]][p[i + 1]] == 0) key = 1;
			}
		}
		if (key != 1)
			result = min(result, sum);

	} while (next_permutation(p, p + N));
	printf("%d\n", result);
	return 0;
}
