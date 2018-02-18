/*

	순열 순서 문제는 long long타입을 사용했기 때문에
	cin cout을 쓰는 것으로 함...

*/

//#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

long long f[21] = { 1 };	//첫 번째 항목 1
bool c[21];	//어떤 수를 사용했는지 알기 위해

int main() {
	for (int i = 1; i <= 20; i++) { //팩토리얼 만들기
		f[i] = f[i - 1] * i;
	}
	int n;
	//scanf("%d", &n);
	cin >> n;
	int what;
	//scanf("%d", &what);
	cin >> what;
	if (what == 1) {
		long long k;
		//long long타입은 c도 지원, c++도 지원
		//c++식으로 쓰려면 cin을 쓰고
		//scanf를 쓰려면 자료형에 맞춰 llo로 받아야함!!!!
		//scanf("%llo", &k); //cin >> k;
		cin >> k;
		vector<int> a(n);
		for (int i = 0; i<n; i++) {
			for (int j = 1; j <= n; j++) {
				if (c[j] == true) continue;
				if (f[n - i - 1] < k) {
					k -= f[n - i - 1];
				}
				else {
					a[i] = j;
					c[j] = true;
					break;
				}
			}
		}
		for (int i = 0; i<n; i++) {
			cout << a[i] << " ";
			//printf("%d ", a[i]);
		}
	}
	else if (what == 2) {
		vector <int> a(n);
		for (int i = 0; i < n; i++) {
			//scanf("%d", &a[i]);
			cin >> a[i];
		}
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < a[i]; j++) {
				if (c[j] == false) {
					ans += f[n - i - 1];	//팩토리얼값을 더함
				}
			}
			c[a[i]] = true;
		}
		//printf("%d\n", ans + 1);
		cout << ans + 1;
	}

	return 0;
}
