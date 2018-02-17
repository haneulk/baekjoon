#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	vector <int> v(N);
	v[0] = 1;
	for (int i = 1; i < N; i++) {
		v[i] = v[i - 1] + 1;
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
	while (next_permutation(v.begin(), v.end())) {
		for (int i = 0; i < N; i++) {
			printf("%d ", v[i]);
		}
		printf("\n");
	}
	return 0;
}
