#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n, sum = 0;
	cin >> k;
	vector<int> v;

	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n != 0) {
			v.push_back(n);
		}
		else if (n == 0)
			v.pop_back();
	}
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	cout << sum;
}
