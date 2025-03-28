#include <iostream>
#include <vector>
using namespace std;

int GCD(long int n1, long int n2) {
	while (n1 % n2 != 0) {
		long int tmp = n1;
		n1 = n2;
		n2 = tmp % n2;
	}
	return n2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		int n;
		cin >> n;
		vector<long int> arr(n);
		for (int j = 0; j < n; j++) {
			cin >> arr.at(j);
		}
		int sum = 0;
		for (int j = 0; j < n - 1; j++) {
			long int n1 = arr.at(j);
			for (int k = j + 1; k < n; k++) {
				long int n2 = arr.at(k);
				sum += GCD(n1, n2);
			}
		}
		cout << sum << '\n';
	}
}