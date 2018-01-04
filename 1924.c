#include <stdio.h>

int main() {
	char arr[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int arr2[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, month, day, sum=0;

	scanf("%d %d", &month, &day);

	if (month == 1) {
		sum = day;
	}
	else {
		for (i = 0; i < month-1; i++) {
			sum += arr2[i];
		}
		sum = sum + day;
	}
	printf("%s\n", arr[sum%7]);

	return 0;
}
