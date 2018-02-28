#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int l, c;
	cin >> l >> c;
	vector <int> v(c);
	vector <char> az(c);
	vector <char> vowel;	//모음 저장벡터
	for (int i = 0; i < c; i++) {
		cin >> az[i];
		if (az[i] == 'a' || az[i] == 'e' || az[i] == 'i' || az[i] == 'o' || az[i] == 'u') {	//모음이 들어왔다면
			vowel.push_back(az[i]);
		}
	}
	for (int i = 0; i < c - l; i++) {
		v[i] = 0;
	}
	for (int i = c - l; i < c; i++) {
		v[i] = 1;
	}
	sort(az.begin(), az.end());
	int vowel_check, consonant_check;

	vector <vector<char>> result;
	do {
		vector <char> now;
		vowel_check = consonant_check = 0;
		for (int i = 0; i < c; i++) {
			if (v[i] == 1) {
				now.push_back(az[i]);
			}
		}
		for (int i = 0; i < l; i++) {	//모음갯수 체크
			for (int j = 0; j < vowel.size(); j++) {
				if (vowel[j] == now[i]) vowel_check++;
			}
		}
		consonant_check = l - vowel_check;	//자음갯수 체크
		if (vowel_check >= 1 && consonant_check >= 2)
			result.push_back(now);
	} while (next_permutation(v.begin(), v.end()));

	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++){
		for (int j = 0; j < l; j++) {
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}
