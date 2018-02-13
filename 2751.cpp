#include <cstdio>
#include <cstring>

using namespace std;

int merge(int *a, int len) {
	if (len < 2) return 0;
	int mid = len / 2;
	merge(a, mid);
	merge(a + mid, len - mid);

	int *buf = new int[len];
	int i = 0, k = 0;
	int j = mid;
	while (i < mid && j < len)
		buf[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
	while (i < mid)
		buf[k++] = a[i++];
	while (j < len)
		buf[k++] = a[j++];
	for (int i = 0; i < len; i++)
		a[i] = buf[i];

	delete[] buf;
}

int main() {
	int N, i;
	int ar[1000] = {};
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &ar[i]);

	merge(ar, N);

	for (i = 0; i < N; i++)
	printf("%d\n", ar[i]);

	return 0;
}
