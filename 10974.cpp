#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	vector <int> v(N);
	for (int i = 0; i < N; i++) {
		v[i] = i + 1;
	}
	//next_permutation을 사용할거면 do while문을 사용해야함
	//next_permutation을 먼저 사용하면 처음 순열을 검사를 할 수 없게 되므로
	 do {
		for (int i = 0; i < N; i++) {
			printf("%d ", v[i]);
		}
		printf("\n");
	 } while (next_permutation(v.begin(), v.end()));
	return 0;
}
