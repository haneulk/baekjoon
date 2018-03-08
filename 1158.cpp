#include <iostream>
#include <queue>
using namespace std;
bool check[5001];
int main() {
	int N, M;
	int a[5001] = {};
	int result[5001] = {};
	int count = 0;
	queue <int> q;

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		a[i] = i;
	}

	q.push(a[M]);
	while (!q.empty()) {
		int now = q.front();
		int m = M;
		q.pop();
		if (check[now]) continue;
		result[count++] = now;
		check[now] = true;
		if (count == N) break;

		int next = now;
		while (m != -1) {
			next = next + 1;
			if (next > N) next = 1;
			if (check[next]) continue;
			m -= 1;
			if (m == 0) {
				q.push(next);
				m = -1;
			}
		}
	}
	cout << "<";
	for (int i = 0; i < count; i++) {
		cout << result[i];
		if (i != count - 1) {
			cout << ", ";
		}
	}
	cout << ">" << endl;


	return 0;
}
