#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	char a[1000];
	int n, i;

	scanf("%s", &a);
	n = strlen(a);
	sort(a, a + n, greater<char>());  //내림차순
	for (i = 0; i<n; i++)
		printf("%c", a[i]);

	return 0;
}
