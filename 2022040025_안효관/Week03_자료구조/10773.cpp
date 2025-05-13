#include <iostream>
#include <string>

using namespace std;

class stack {
	int* mem; 
	int size;
	int top;
public:
	stack(int size);
	void sum();
	void show();
};

stack::stack(int size) {
	this->size = size;
	mem = new int[this->size];
}

void stack::sum() {
	int num;
	int count=0;
	for (int i = 0; i < size; i++) {
		cin >> num;
		if (num == 0) {
			count--;
		}
		else {
			mem[count] = num;
			count++;
		}
	}
	top = count;
}

void stack::show() {
	int total = 0;
	for (int i = 0; i < top; i++) {
		total += mem[i];
	}
	cout << total;
}

int main() {
	int n;
	cin >> n;
	stack a(n);
	a.sum();
	a.show();
}