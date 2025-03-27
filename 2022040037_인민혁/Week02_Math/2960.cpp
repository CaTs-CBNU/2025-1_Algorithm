#include <iostream>
#include <vector>
using namespace std;

void Eratos(int n, int ind) {
	vector<bool> is_prime(n + 1, true);
	is_prime[1] = false;
	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			for (int j = i; j <= n; j += i) {
				if (!is_prime[j]) continue;
				else {
					is_prime[j] = false;
					cnt++;
					if (cnt == ind) {
						cout << j << endl;
						return;
					}
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num, ind;
	cin >> num >> ind;
	Eratos(num, ind);
}