#include <iostream>
using namespace std;

int main() {
	int n, m, count = 0, pos = 0;
	int a[10001] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	while (pos < n) {
		int sum = 0;
		for (int i = pos; i < n; i++) {
			if (sum < m) {
				sum += a[i];
			}
			else if (sum > m){
				break;
			}
			if (sum == m) {
				count += 1;
				break;
			}
		}
		pos++;
	}
	cout << count << endl;
	return 0;
}
