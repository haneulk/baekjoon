#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	vector <int> v(N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
	}
	if (prev_permutation(v.begin(), v.end())) { //이전 순열
		for (int i = 0; i < N; i++) {
			printf("%d ", v[i]);
		}
	}
	else {
		printf("-1\n");
	}
	return 0;
}
