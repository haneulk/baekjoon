#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int i, N, v, result = 0;
	char in[6] = {};
	queue<int> q;

	scanf("%d ", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", in);
		if (!strcmp(in, "push")) {
			scanf("%d", &v);
			q.push(v);
		}
		else if (!strcmp(in, "pop")) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				result = q.front();
				q.pop();
				printf("%d\n", result);
			}
		}
		else if (!strcmp(in, "size")) {
			printf("%d\n",q.size());
		}
		else if (!strcmp(in, "empty")) {
			if (q.empty()) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (!strcmp(in, "front")) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q.front());
			}
		}
		else if (!strcmp(in, "back")) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q.back());
			}
		}
	}

	return 0;
}
