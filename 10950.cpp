#include <cstdio>
using namespace std;

int main() {
	int T, A, B;	
	scanf("%d", &T);
	while (T--) {	//T개수를 모를때 이런식으로 구현하기
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}
