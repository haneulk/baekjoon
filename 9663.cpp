#include <iostream>
using namespace std;
bool a[15][15];
int n;
int ans = 0;
bool check(int row, int col) {
	// 위부터 아래로 행 검사 
	for (int i = 0; i<n; i++) {
		if (i == row) continue;
		if (a[i][col]) {	//퀸이 놓여져 있으면 false
			return false;	//이 자리에 못 넣으니까 false
		}
	}
	// 왼쪽 위 대각선
	int x = row - 1;
	int y = col - 1;
	while (x >= 0 && y >= 0) {
		if (a[x][y] == true) {
			return false;
		}
		x -= 1;
		y -= 1;
	}
	// 오른쪽 위 대각선
	x = row - 1;
	y = col + 1;
	while (x >= 0 && y < n) {
		if (a[x][y] == true) {	//x행 y열에 퀸이 놓여져 있는 것
			return false;
		}
		x -= 1;
		y += 1;
	}
	return true;
}
void calc(int row) {
	if (row == n) {	//마지막 행으로 왔으면 퀸이 다 채워진 것이므로
		ans += 1;	// 정답에 1을 더함
	}
	for (int col = 0; col<n; col++) {
		a[row][col] = true;
		if (check(row, col)) {	//이 자리가 가능한지 확인
			calc(row + 1);
		}
		a[row][col] = false;	//다시 원래 상태로 돌려놓아줌 -> 백트랙킹
	}
}
int main() {
	cin >> n;
	calc(0);
	cout << ans << '\n';
	return 0;
}
