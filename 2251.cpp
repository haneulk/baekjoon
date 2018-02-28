#include <iostream>
#include <queue>

using namespace std;
typedef pair<int, int> p;

//main 밖에 선언해야 false값으로 초기화됨
bool check[201][201];
bool result[201];

int main() {
	int a, b, c, sum;
	cin >> a >> b >> c;
	sum = c;
	queue <p> q;
	q.push(p(0, 0));
	check[0][0] = true;
	result[c] = true;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		int z = sum - x - y;
		q.pop();
		int nx, ny, nz;
		
		nx = x;
		ny = y;
		nz = z;
		//x->y
		ny += nx;	//x에 있던 물의양을 y로 옮기기
		nx = 0;		//x에 있던 물 다옮겨버려서 0
		if (ny >= b) {	//물통의 범위(b)보다 물의양{ny)이 많으면
			nx = ny - b;	//ny에서 넘쳤던 물 양만큼 다시 nx의 물양으로 넣어줌
			ny = b;			//ny엔 물통의 범위만큼 물이 들어가게 됨
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}

		nx = x;
		ny = y;
		nz = z;
		//x->z
		nz += nx;
		nx = 0;
		if (nz >= c) {
			nx = nz - c;
			nz = c;
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}

		nx = x;
		ny = y;
		nz = z;
		//y->x
		nx += ny;
		ny = 0;
		if (nx >= a) {
			ny = nx - a;
			nx = a;
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}

		nx = x;
		ny = y;
		nz = z;
		//y->z
		nz += ny;
		ny = 0;
		if (nz >= c) {
			ny = nz - c;
			nz = c;
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}

		nx = x;
		ny = y;
		nz = z;
		//z->x
		nx += nz;
		nz = 0;
		if (nx >= a) {
			nz = nx - a;
			nx = a;
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}

		nx = x;
		ny = y;
		nz = z;
		//z->y
		ny += nz;
		nz = 0;
		if (ny >= b) {
			nz = ny - b;
			ny = b;
		}
		if (!check[nx][ny]) {
			check[nx][ny] = true;
			q.push(p(nx, ny));
			if (nx == 0) {
				result[nz] = true;
			}
		}
	}
	for (int i = 0; i <= c; i++) {
		if (result[i]) {
			cout << i << ' ';
		}
	}


	return 0;
}
