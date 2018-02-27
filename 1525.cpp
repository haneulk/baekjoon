#include <iostream>
#include <queue>
#include <string>
#include <map>
using namespace std;

//dx, dy 두개 합해서 {오른쪽, 왼쪽, 아래, 위} 
int dx[] = { 0, 0, 1, -1 };	//행 이동을 나타냄
int dy[] = { 1, -1, 0, 0 };	//열 이동을 나타냄

int main() {
	int n = 3;
	int start = 0;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			int temp;
			cin >> temp;
			if (temp == 0) {	//0을 9로 바꿔서함! 왜냐하면 9자리 숫자로 표현하기 위함
				temp = 9;
			}
			start = start * 10 + temp;	//입력된 수 순서대로 값을 쭉 만들어줌 (ex) 193425786)
		}
	}
	queue<int> q;
	map<int, int> dist;	//거리
	dist[start] = 0;
	q.push(start);
	while (!q.empty()) {
		int now_num = q.front();
		string now = to_string(now_num);	//int형을 string으로 변환
		q.pop();
		int z = now.find('9');	//9가 있는 자리를 찾음
		int x = z / 3;	//9의 행 위치
		int y = z % 3;	//9의 열 위치
		for (int k = 0; k<4; k++) {	//오른쪽, 왼쪽, 위, 아래로 총 4가지 방법으로 이동이 가능하므로
			int nx = x + dx[k];	//빈칸인 9의 위치를 행 이동시켜봄
			int ny = y + dy[k];	//빈칸인 9의 위치를 열 이동시켜봄
			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {	//3*3판의 범위를 벗어나지 않는다면
				string next = now;
				swap(next[x * 3 + y], next[nx * 3 + ny]);	//string변수인 next에서 9의 위치와 행,열이동시켜본 위치랑 바꿔줌
				int num = stoi(next);
				//map의 count함수는 key값을 반환해서 없으면 0 있으면 1
				if (dist.count(num) == 0) {	//map의 key값이 0이면 (=거리가 0이면)
					dist[num] = dist[now_num] + 1;
					q.push(num);
				}
			}
		}
	}
	if (dist.count(123456789) == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << dist[123456789] << '\n';
	}
	return 0;
}
