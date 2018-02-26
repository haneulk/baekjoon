#include <iostream>
#include <queue>
#include <cstring>	//memset을 사용하기위함
#include <string>
#include <algorithm> //reverse를 사용하기위함

using namespace std;
int main() {
	int a, b, t;
	bool visited[10001];	//방문유무 배열
	int d[10001];	//거리를 저장하는 배열
	int from[10001];	//next가 어떤수에서 만들어졌는지 저장
	char how[10001];	//어떻게 만들어졌는지 저장(DSLR)
	int now;

	cin >> t;
	while (t--) {
		cin >> a >> b;
		memset(visited, false, sizeof(visited));
		memset(d, 0, sizeof(d));
		memset(from, 0, sizeof(from));
		memset(how, 0, sizeof(how));
		visited[a] = true;
		d[a] = 0;
		from[a] = 0;
		queue <int> q;
		q.push(a);
		while (!q.empty()) {
			now = q.front();	//현재숫자
			q.pop();

			//D
			int next = 2 * now % 10000;
			if (!visited[next]) {	//next가 방문하지 않은것일때 큐에 넣을 수 있음
				q.push(next);
				visited[next] = true;
				d[next] = d[now] + 1;	//이 문제에서는 쓰이지 않지만 최소이동거리 등을 구할때 사용
				from[next] = now;
				how[next] = 'D';
			}

			//S
			next = now - 1;
			if (next == -1) next = 9999;
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				d[next] = d[now] + 1;
				from[next] = now;
				how[next] = 'S';
			}

			//L
			next = (now % 1000) * 10 + now / 1000;
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				d[next] = d[now] + 1;
				from[next] = now;
				how[next] = 'L';
			}

			//R
			next = (now / 10) + (now % 10) * 1000;
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				d[next] = d[now] + 1;
				from[next] = now;
				how[next] = 'R';
			}
		}
		string result = "";
		while (b != a) {
			result += how[b];
			b = from[b];
		}
		reverse(result.begin(), result.end());
		cout << result << endl;
	}
	return 0;
}
