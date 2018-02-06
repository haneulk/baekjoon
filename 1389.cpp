#include <cstdio>
using namespace std;

int main() {
	int N, M;
	int graph[101][101] = {};
	int result[101] = {};
	int i, j, k, count = 0;
	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			graph[i][j] = 5000;
		}
	}
	for (i = 1; i <= M; i++) {
		scanf("%d %d", &j, &k);
		graph[j][k] = graph[k][j] = 1;
	}
	for (i = 1; i <= N; i++) graph[i][i] = 0;

	for (k = 1; k <= N; k++) {	//플로이드워셜
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				if (graph[i][j] > graph[i][k] + graph[k][j]) {
					graph[i][j] = graph[i][k] + graph[k][j];
				}
			}
		}
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			result[i] += graph[i][j];
		}
	}

	int min = result[1], pos=1;	//1부터 시작하는 것을 주의
	for (i = 2; i <= N; i++) {
		if (result[i] < min) {
			min = result[i];
			pos = i;
		}
	}
	printf("%d\n",pos);
}
