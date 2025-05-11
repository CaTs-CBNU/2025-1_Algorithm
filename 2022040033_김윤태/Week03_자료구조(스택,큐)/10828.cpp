#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Stack {
	int index;
	vector<int> v;
public:
	void push() {
		int i;
		cin >> i;
		v.push_back(i);
	}
	void pop() {
		if (v.empty() == false) {
			cout << v.back() << "\n";
			v.pop_back();
		}
		else
			cout << -1 << "\n";
	}
	void size() {
		cout << v.size() << "\n";
	}
	void empty() {
		if (v.empty() == true)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	void top() {
		if (v.empty() == true)
			cout << -1 << "\n";
		else
			cout << v.back() << "\n";
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string command;
	Stack s;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			s.push();
		}
		else if (command == "pop") {
			s.pop();
		}
		else if (command == "size") {
			s.size();
		}
		else if (command == "empty") {
			s.empty();
		}
		else if (command == "top") {
			s.top();
		}
	}
}
