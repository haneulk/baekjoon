#include <stdio.h>
#include <string.h>

int main() {
	char in[1000000] = {};
	int count[26] = {}, i = 0, max=0, check=0, check2=0, length;

	scanf("%s", &in);
	length = strlen(in);
	for (i = 0; i < length; i++) {
		if (in[i] >= 'a' && in[i] <= 'z')
			in[i] -= 32;
		count[in[i] - 65]++;
	}
	max = count[0];
	for (i = 0; i < 26; i++) {
		if (count[i]>max) max = count[i];
	}
	for (i = 0; i < 26; i++) {
		if (max == count[i]) {
			check += 1;
			check2 = i;
		}
	}
	if (check == 1) {
		printf("%c\n", check2+65);
	}
	else {
		printf("?\n");
	}
	return 0;
}
