#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		string s;
		vector<char> v;
		bool valid = true;

		getline(cin, s);
		if (s == ".")
			break;
		for (char c : s) {
			if (c == '(')
				v.push_back('(');
			else if (c == '[')
				v.push_back('[');

			else if (c == ')') {
				if (v.empty() == false) {
					if (v.back() == '(')
						v.pop_back();
					else {
						valid = false;
						break;
					}
				}
				else if (v.empty() == true) {
					valid = false;
					break;
				}

			}
			else if (c == ']') {
				if (v.empty() == false) {
					if (v.back() == '[')
						v.pop_back();
					else {
						valid = false;
						break;
					}
				}
				else if (v.empty() == true) {
					valid = false;
					break;
				}
			}
		}
		if (!v.empty()) valid = false;
		if (valid == false)
			cout << "no" << "\n";
		else
			cout << "yes" << "\n";
	}
}
