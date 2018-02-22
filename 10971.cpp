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

	} while (next_permutation(p + 1, p + N));
	/*
	p가 아닌 p+1부터 시작하면 맨 앞에가 고정되어있고 2번자리수만 바뀌면서 순열이 적용됨
	이 문제 자체가 마지막 지점에서 바로 처음출발지로 돌아오기때문에
	1234 2341 3412 4123 이게 다 똑같은 경로이자 거리가 됨
	따라서 앞에 1을 고정을 시킨 후 뒤에만 바꿔줘도 시간 복잡도가
	O(N*N!)에서 O(N!)로 바뀜
	실제로 채점 결과 52MS가 걸렸던것이 4MS로 바뀜!!
	*/
	printf("%d\n", result);
	return 0;
}
