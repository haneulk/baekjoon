#include <iostream>

using namespace std;

int main() {
	int a[1000001] = {};
	int n, in, b, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long count = 0;	//int형 정수범위보다 큰 것
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		a[i] -= b;
		count++;
		if (a[i] > 0) {
			if (a[i] % c == 0) count += (a[i] / c);
			else {
				count += (a[i] / c) + 1;
			}
		}
	}

	cout << count << endl;
	return 0;
}
