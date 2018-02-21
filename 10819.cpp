#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	vector <int> v(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());	//순열함수 사용하려면 일단 오름차순으로 쭉 정리해주기!!
	int result = 0;
	do {	//순열 사용
		int sum = 0;
		for (int i = 2; i <= N; i++) {
			int value = 0;
			value = v[i - 2] - v[i - 1];
			if (value < 0) value = -value;	//양수로 전환
			sum += value;
		}
		result = max(result, sum);
	} while (next_permutation(v.begin(), v.end()));

	printf("%d\n", result);
	return 0;
}
