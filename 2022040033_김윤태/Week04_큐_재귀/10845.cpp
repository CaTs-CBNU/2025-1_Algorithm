#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Queue {
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
			cout << v.front() << "\n";
			v.erase(v.begin());
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
	void front() {
		if (v.empty() == true)
			cout << -1 << "\n";
		else
			cout << v.front() << "\n";
	}
	void back() {
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
	Queue s;
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
		else if (command == "front") {
			s.front();
		}
		else if (command == "back") {
			s.back();
		}
	}
}
