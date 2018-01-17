#include <stdio.h>
#include <string.h>

int main() {
	char in[100] = {};
	int abc[26] = {};
	int i = 0, length=0;
	scanf("%s", in);
	length = strlen(in);
	for (i = 0; i < 26; i++)
		abc[i] = -1;
	for (i = 0; i < length; i++) {
		if (abc[in[i] - 97] == -1) 
			abc[in[i] - 97] = i;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", abc[i]);
	}
	return 0;
}
