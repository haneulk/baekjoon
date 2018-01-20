#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, in_score, zero = 0, max=0;
	float s_arr[1000] = {}, avg=0, sum=0;

	scanf("%d", &N);
	if (N > 1000)	//조건만족
		exit(0);

	for (int i = 0; i < N; i++) {	//배열입력
		scanf("%d", &in_score);
		if (in_score >=0 && in_score <= 100)
			s_arr[i] = in_score;
	}

	for (int i = 0; i <= N; i++) {	//적어도 하나의 값은 0보다 큼
		if (zero == N) {
			exit(0);
		}
		else {
			if (s_arr[i] == 0) {
				zero++;
			}
		}
	}
	
	for (int i = 0; i < N; i++) {	//최대값 찾기
		max = (max < s_arr[i] ? s_arr[i] : max);
	}

	for (int i = 0; i < N; i++) {	//새로운 평균 구하기
		s_arr[i] = (s_arr[i] / max) * 100;
		sum += s_arr[i];
	}

	avg = sum / N;
	printf("%.2f\n", avg);

	return 0;
} 
