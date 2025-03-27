#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, t;
	char comma;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> comma >> b;
		c = a + b;
		cout << c << endl;
	}
}