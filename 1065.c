#include <stdio.h>
int main() {
	int n, i, j, n2, arr[3], han;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i < 100) han = i;	//한자리수는 공차가 아예 없음, 두자리수는 공차가 무조건 1개
		else if (i == 1000) break;
		else {
			j = 0; n2 = i;
			while (n2>0) {	//세자리수 분리해서 배열에 거꾸로 집어넣음
				arr[j] = n2 % 10;
				n2 /= 10;
				j++;
			}
			if (arr[1] - arr[0] == arr[2] - arr[1]) han++;
		}
	}
	printf("%d\n", han);
	return 0;
}
