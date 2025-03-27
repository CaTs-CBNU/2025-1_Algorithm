#include <iostream>
#include <cmath>
using namespace std;

bool is_Prime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int nums;
		cin >> nums;
		if (nums == 1) continue;
		if (is_Prime(nums)) cnt++;
	}
	cout << cnt;
}