#include <iostream>
using namespace std;
bool prime[10001] = { 1, 1, };
int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < 10001; i++) {
		if (!prime[i]) {
			for (int j = i*i; j < 10001; j += i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 0; i < 10001; i++) {
		prime[i] = !prime[i];
	}
	int sum = 0, min = 0, key = 0;
	for (int i = n; i <= m; i++) {
		if (prime[i] == true) {
			sum += i;
			if (key == 0) min = i;
			key = 1;
		}
	}
	if (key == 1) {
		cout << sum << endl << min << endl;
	}
	else if (key == 0) {
		cout << -1 << endl;
	}

	return 0;
}
