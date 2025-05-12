#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++) {
		bool valid = true;
		int count = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(')
				count++;
			else if (s[j] == ')') {
				count--;
				if (count < 0) {
					valid = false;
					break;
				}
			}
		}
		if (valid && count == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}
