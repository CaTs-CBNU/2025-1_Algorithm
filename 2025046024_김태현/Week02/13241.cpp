#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	long a, b;
	cin >> a >> b;

	long x = a;
	long y = b;

	while (a % b != 0) {
		long temp = a % b;
		a = b;
		b = temp;
	}

	x /= b;
	y /= b;

	a = x * y * b;
	cout << a;

	return 0;
}