#include <cstdio>
#include <algorithm>
using namespace std;

#define INDEX 10001

int main() {
	int N, i, j, k;
	int a[INDEX] = {};	//10000보다 작거나 같은 자연수라서

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &k);
		a[k] = a[k] + 1; //배열 방 번호가 곧 입력한 숫자이고, 몇개가 들어왔는지 세는 것임
	}

	for (i = 1; i < INDEX; i++) {
		if (a[i] != 0) {
			for (j = 0; j < a[i]; j++)
				printf("%d\n", i);
		}
	}
	return 0;
}
