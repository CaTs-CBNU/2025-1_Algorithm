#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num1, num2, temp;
	cin >> num1 >> num2;
	int a = num1;
	int b = num2;

	while (true) {
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
		if (num2 == 0)
			break;
	}

	cout << num1 << "\n" << a * b / num1;
}