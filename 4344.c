#include <stdio.h>

int main() {
	int i, j, C, N, arr[1000][1000] = {}, count = 0;
	float sum = 0, avg = 0, per[1000] = {};

	scanf("%d", &C);
	for (i = 0; i < C; i++) {
		scanf("%d", &N);
		for (j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		avg = sum / N;
		for (j = 0; j < N; j++) {
			if (avg < arr[i][j]) {
				count++;
			}
		}
		per[i] = (float)count / (float)N * 100;

		sum = 0;
		count = 0;
	}
	for (i = 0; i < C; i++) {
		printf("%.3f%%\n", per[i]);
	}
	return 0;
}
