#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void) {
	while (true) {
		stack<char> stk;
		string s;
		getline(cin, s);
		if (s == ".") {
			break;
		}

		for (char c : s) {
			if (c == '(') {
				stk.push(c);
			}
			if (c == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				}
				else {
					stk.push(c);
					break;
				}
			}
			if (c == '[') {
				stk.push(c);
			}
			if (c == ']') {
				if (!stk.empty() && stk.top() == '[') {
					stk.pop();
				}
				else {
					stk.push(c);
					break;
				}
			}
		}




		if (stk.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
		while (!stk.empty()) {
			stk.pop();
		}
	}


}