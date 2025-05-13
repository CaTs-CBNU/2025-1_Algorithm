#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int src, int dest, int n) {
	if (n == 1) {
		cout << src << ' ' << dest << '\n';
		return;
	}
	hanoi(src, 6 - src - dest, n - 1);
	cout << src << ' ' << dest << '\n';
	hanoi(6 - src - dest, dest, n - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << int(pow(2, n) - 1) << '\n';
	hanoi(1, 3, n);
}