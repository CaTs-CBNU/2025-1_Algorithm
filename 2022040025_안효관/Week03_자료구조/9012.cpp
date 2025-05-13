#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class stack {
	string mem;
	int size;
public:
	void input();
	bool process();
	void show();
};

void stack::input() {
	cin >> mem;
	size=mem.length();
}

bool stack::process() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (mem[i] == '(') {
			count++;
		}
		if (mem[i] == ')') {
			count--;
		}
		if (count < 0) {
			return false;
		}
	}
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}

void stack::show() {
	if (process()) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}

int main() {
	stack a;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		a.input();
		a.process();
		a.show();
	}
}