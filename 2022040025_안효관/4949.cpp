#include <iostream>
#include <string>
#include <stack>
#include <cstring>

using namespace std;

class r {
	string mem;
	int top;
public:
	void input();
	bool process();
	void show();
};

void r::input() {
	while (1) {
		getline(cin , mem);
		top = mem.length();
		if (mem==".") {
			break;
		}
		else {
			show();
		}
	}
}

bool r::process() {
	stack<char> s;
	for (char c : mem) {

		if (c == '(' or c == '[') {
			s.push(c);        
		}

		else if (c == ')') {   

			if (s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
		}

		else if (c == ']') {

			if ( s.empty() || s.top() != '[') {
				
				return false;
			}
			s.pop();
		}
	}
	if (!s.empty()){
		return false;
	}
	return true; 
}

void r::show() {
	if (this->process()) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
}


int main() {
	r a;	
	a.input();
}