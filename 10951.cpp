#include <cstdio>
using namespace std;

int main() {
	int A, B;	
	//입력이 몇개인지 주어지지 않았을 때는 EOF까지 받으면 됨
	while (scanf("%d %d",&A,&B)==2) {
		//while(cin>>A>>B)
		printf("%d\n", A + B);
	}
	return 0;
}
