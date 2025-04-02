#include <iostream>
using namespace std;


int main() {
	int num1, num2;
	int a, b, c;
	cin >> num1 >> num2;
	a = num1;
	b = num2;
	if (num1 < num2) { a = num2; b = num1; }
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	cout <<a<<" "<<num1*num2/a;
}