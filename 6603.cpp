#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int k;

	while (1) {
		scanf("%d", &k);
		if (k == 0) break;
		vector <int> v(k);
		for (int i = 0; i < k; i++) {
			scanf("%d", &v[i]);
		}

		vector <int> d;
		for (int i = 0; i < k - 6; i++)
			d.push_back(0);
		for (int i = 0; i < 6; i++) //6개뽑는거니까
			d.push_back(1);	//1이 들어가있는 자리만 값들을 채울 것임

		vector<vector<int>> result;	//로또 번호들이 들어있는 2차원 벡터
		do {
			vector <int> c;	//현재 로또 번호
			for (int i = 0; i < k; i++) {
				if (d[i] == 1) {
					c.push_back(v[i]);
				}
			}
			//c 벡터에 
			result.push_back(c);
		} while (next_permutation(d.begin(), d.end())); //0과 1로 구성된 d를 오름차순으로 순열을 만듦

		sort(result.begin(), result.end());	//사전 순으로 정렬

		for (int i = 0; i < result.size(); i++) {	//result에 들어있는 만큼 다 출력해야되니까 result.size()임
			for (int j = 0; j < 6; j++) {
				printf("%d ", result[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
