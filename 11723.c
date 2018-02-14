#include <stdio.h>

int main() {
	int n, x;
	unsigned int k = 0;
	char op[10];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", op);

		switch (op[1]) {
		case 'd' :	//add
			scanf("%d", &x);
			k |= (1 << x);
			break;
		case 'e' :	//remove
			scanf("%d", &x);
			k &= ~(1 << x);
			break;
		case 'h' :	//check
			scanf("%d", &x);
			printf("%d\n", k & (1 << x) ? 1 : 0);
			break;
		case 'o' :	//toggle
			scanf("%d", &x);
			k ^= (1 << x);
			break;
		case 'l' :	//all
			k = (1 << 22) - 1;
			break;
		case 'm' :	//empty
			k = 0;
			break;
		}
	}
	return 0;
}

/*
	- add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
	- remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
	- check x: S에 x가 있으면 1을, 없으면 0을 출력한다.
	- toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
	- all: S를 {1, 2, ..., 20} 으로 바꾼다.
	- empty: S를 공집합으로 바꾼다.
*/
