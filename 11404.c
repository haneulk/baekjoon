#include <cstdio>
using namespace std;

int min(int a, int b) { return (a < b ? a: b); }

int main() {
	int n, m, a, b, c;
	int i, j, k;
	int graph[101][101];

	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++) {	//초기화가 중요
		for (j = 1; j <= n; j++) {
			graph[i][j] = 100000;
		}
	}
	for (i = 1; i <= n; i++) graph[i][i] = 0;

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		graph[a][b] = min(graph[a][b], c);
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			if (i == k) continue;	//1->1, 2->2 ... n->n으로 가는건 모두 0이므로
			for (j = 1; j <= n; j++) {
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
			}
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	return 0;
}
