#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {

	int num;
	cin >> num;

	stack<int> stk;


	for (int i = 0;i < num;i++) {
		int n;
		string s;
		cin >> s;


		if (s == "push") {
			cin >> n;
			stk.push(n);
		}
		if (s == "pop") {
			if (stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
				stk.pop();
			}
		}
		if (s == "size") {
			cout << stk.size() << endl;
		}
		if (s == "empty") {
			if (stk.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		if (s == "top") {
			if (stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
			}
		}

		//cout << "A" << endl;

	}




}