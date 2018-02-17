#include <cstdio>
using namespace std;

int main() {
	char a[100] = {};
	while (fgets(a, 100, stdin)) {	//줄바꿈까지 입력받음!! 조심
									//getline(cin, a); //getline은 줄바꿈전까지 입력받음
		printf("%s", a);
	}
	return 0;
}
