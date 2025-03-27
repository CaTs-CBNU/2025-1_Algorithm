#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	cin >> num;
	int i = 2;
	while (num != 1) {
		if (num % i == 0) {
			num /= i;
			cout << i << '\n';
		}
		else i++;
	}
}