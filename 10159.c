#include <cstdio>
using namespace std;

int main() {
	int i, j, k;
	int N, M;
	int graph[101][101] = {};

	scanf("%d %d", &N, &M);
	for (i = 1; i <= M; i++) {
		scanf("%d %d", &j, &k);
		graph[j][k] = 1;	//먼저 써진 숫자가 무게가 크므로 그냥 단방향이면 됨
	}
	for (k = 1; k <= N; k++) {
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				if (graph[i][k] && graph[k][j]) {	//연결시킴
					graph[i][j] = 1;
				}
			}
		}
	}
	
	for (i = 1; i <= N; i++) {
		int result = 0;
		for (j = 1; j <= N; j++) {
			if (!graph[i][j] && !graph[j][i]) {	//연결되어 있지 않은 것
				result++;
			}
		}
		printf("%d\n", result - 1); //(i,i)는 다 빼줌!! ex) (1,1), (2,2), ...
	}
	return 0;
}
