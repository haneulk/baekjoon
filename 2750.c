#include <cstdio>

using namespace std;

int main() {
	int in, arr[1000] = {}, i, j, temp=0;

	scanf("%d", &in);
	for (i = 0; i < in; i++) scanf("%d", &arr[i]);
	
	for (i = 0; i < in; i++) {
		for (j = 0; j < in-1; j++) {
			if (arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < in; i++) printf("%d ", arr[i]);
	return 0;
}
