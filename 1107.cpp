#include <cstdio>
using namespace std;

bool broken[11] = {}; //고장이났으면 true(1), 아니면 false(0)
int possible(int c) {
	if (c == 0) {
		return broken[0] ? 0 : 1;	//0번으로 채널이동하려고 하는데 고장난 버튼이 0번이면 0을 못누르니까 채널이동 길이는 0
	}
	int len = 0;
	while (c > 0) {
		if (broken[c % 10]) return 0;	//고장난 버튼이면 0!! 맨 뒷자리부터 판단
		len += 1;
		c /= 10;
	}
	return len;
}

int main() {
	int N, M, bk;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {	//고장난 버튼 표시
		scanf("%d", &bk);
		broken[bk] = true;
	}
	//숫자를 안 누르고 +,-버튼으로만 채널 이동하는 방법(고장난 숫자버튼이랑 전혀 관련 없음!)
	int nn = N - 100;	//100번에서 시작하니까
	if (nn < 0)	//음수를 양수로 바꿔줌(길이구해야되니까)
		nn = -nn;
	//숫자버튼을 누르고 +,-버튼으로 채널 이동하는 방법
	for (int i = 0; i < 1000000; i++) {
		int c = i;
		int len = possible(c);	//고장난 버튼확인하면서 고장난 버튼을 제외한 숫자버튼 길이 재기
		if (len>0) {
			int press = c - N;
			if (press < 0) press = -press;
			if (nn > len + press) nn = len + press;
		}
	}
	printf("%d\n", nn);
	return 0;
}
