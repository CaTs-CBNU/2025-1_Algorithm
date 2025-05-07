#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	int n;

	cin >> n;

	for (int i = 0;i < n;i++) {
		int cnt = 0;
		string s;
		cin >> s;

		for (char c : s) {
			if (c == '(') {
				cnt++;
			}
			if (c == ')') {
				cnt--;
				if (cnt < 0)
					break;
			}
		}

		if (cnt == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


}