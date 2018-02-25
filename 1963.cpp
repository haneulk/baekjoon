#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
bool prime[10001];
bool c[10001];
int d[10001];
int change(int num, int index, int digit) {
	//num : 현재 숫자, index : num에서 바꿀 숫자 위치, digit : 바꿀 숫자
	if (index == 0 && digit == 0) return -1;	//바꿀 위치가 맨 앞이고 바꿀 숫자가 0이면 1000이상이 아니므로 return -1
	string s = to_string(num);	//int형을 string형으로 바꾸고
	s[index] = digit + '0';	//바뀐 형태에 바꿀 숫자를 넣어줌
	return stoi(s);	//return시 string을 다시 int형으로 바꿈
}
int main() {
	//소수구하는 코드
	for (int i = 2; i <= 10000; i++) {
		if (prime[i] == false) {
			for (int j = i*i; j <= 10000; j += i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 0; i <= 10000; i++) {
		prime[i] = !prime[i];
	}

	int t;	//testcase의 수
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		memset(c, false, sizeof(c));
		memset(d, 0, sizeof(d));
		d[n] = 0;
		c[n] = true;
		queue<int> q;
		q.push(n);
		while (!q.empty()) {
			int now = q.front();
			q.pop();
			for (int i = 0; i<4; i++) {	//4자리 숫자이므로
				for (int j = 0; j <= 9; j++) {	//각 자리의 숫자를 0~9까지 다 바꿔보기 위함
					int next = change(now, i, j);	//현재 숫자의 i자리를 j로 바꿔보는 함수
					if (next != -1) {
						if (prime[next] && c[next] == false) {	//소수이자 다음 소수를 방문하지 않았을 경우
							q.push(next);
							d[next] = d[now] + 1;	//다음 숫자로 지목된 소수 배열방에 현 위치에서 온만큼의 거리에 +1을 해줌(= 다음 소수까지 온 거리가 들어감)
							c[next] = true;	//방문 표시
						}
					}
				}
			}
		}
		cout << d[m] << '\n';
	}
	return 0;
}
