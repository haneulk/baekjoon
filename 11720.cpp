#include <cstdio>
using namespace std;

int main() {
	int n, in, sum=0;
	scanf("%d", &n);
	while (n--) {
		 scanf("%1d", &in);	//d 앞에 숫자를 추가하면 54321을 5,4,3,2,1로 받을 수 있음
		 sum += in;
	}
	printf("%d\n",sum);
	return 0;
}
