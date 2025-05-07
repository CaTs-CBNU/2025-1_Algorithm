#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;

	int x = a;
	int y = b;

	while (a % b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	x /= b;
	y /= b;

	a = x * y * b;
	cout << b << " " << a;

	return 0;
}