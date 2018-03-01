#include <iostream>
using namespace std;
bool prime[1001] = {1,1,};
int main() {
	for (int i = 0; i < 1001; i++) {
		if (!prime[i]) {
			for (int j = i*i; j < 1001; j += i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 0; i < 1001; i++) {
		prime[i] = !prime[i];
	}

	int n, count=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (prime[num] == 1) count++;
	}
	cout << count << endl;

	return 0;
}
