#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long int a, b;
	cin >> a >> b;
	long long int lcm = a * b;
	while (a % b != 0) {
		int tmp;
		tmp = a;
		a = b;
		b = tmp % b;
	}
	lcm /= b;
	cout << lcm;
}