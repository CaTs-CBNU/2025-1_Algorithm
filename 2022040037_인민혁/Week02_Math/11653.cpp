#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Eratos(int n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[1] = false;
	for (int i = 2; i < sqrt(n); i++) {
		if (is_prime) {
			for (int j = pow(i, 2); j <= n; j++) {
				is_prime[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) cout << i << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	cin >> num;
	Eratos(num);
}