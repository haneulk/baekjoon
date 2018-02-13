#include <cstdio>
#include <algorithm>	//sort함수 사용을 위함

using namespace std;

int main() {
	int num[1000];
	int N, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);

	sort(num, num + N);	//c++ 정렬함수 오름차순
	for (i = 0; i < N; i++)
		printf("%d\n", num[i]);

	return 0;
}
