#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, in;
	vector <int> v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &in);
		v.push_back(in);
	}
	if (next_permutation(v.begin(), v.end())) {	//순열오름차순
		for (int i = 0; i < N; i++) {
			printf("%d ", v[i]);
		}
	}
	else {
		printf("-1\n");
	}
}
