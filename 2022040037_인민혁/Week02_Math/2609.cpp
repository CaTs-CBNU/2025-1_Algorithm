#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	cin >> a >> b;
	int lcm = a * b;
	while (a % b != 0) {
		int tmp;
		tmp = a;
		a = b;
		b = tmp % b;
	}
	lcm /= b;
	cout << b << '\n' << lcm << '\n';
}