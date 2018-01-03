#include <stdio.h>

int main() {
	int in, comp, cnt = 0;
	scanf("%d", &in);
	comp = in;
	do {
		cnt++;
		comp = comp % 10 * 10 + (comp/10 + comp%10)%10;
	} while (in != comp);

	printf("%d\n", cnt);

	return 0;
}
