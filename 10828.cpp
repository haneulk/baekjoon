#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n, n2, now;
	string my;
	stack <int> s;
	cin >> n;
	while (n--) {
		cin >> my;
		if (my == "push") {
			cin >> n2;
			s.push(n2);
		}
		else if (my == "pop") {
			if (s.empty()) cout << "-1" << endl;
			else {
				now = s.top();
				s.pop();
				cout << now << endl;
			}
		}
		else if (my == "size") {
			cout << s.size() << endl;
		}
		else if (my == "empty") {
			if (s.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (my == "top") {
			if (s.empty()) cout << "-1" << endl;
			else {
				cout << s.top() << endl;
			}
		}
	}
	return 0;
}
