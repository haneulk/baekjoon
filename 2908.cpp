#include <cstdio>
using namespace std;

int main() {
	char a[4], b[4];
	int a2[4], b2[4];
	int n1, n2;
	scanf("%s %s", a, b);
	for (int i = 0; i<3; i++) {
		a2[i] = a[i] - '0';
		b2[i] = b[i] - '0';
	}
	n1 = a2[2] * 100 + a2[1] * 10 + a2[0];
	n2 = b2[2] * 100 + b2[1] * 10 + b2[0];

	if (n1 > n2) printf("%d\n",n1);
	else printf("%d\n", n2);

	return 0;
}
