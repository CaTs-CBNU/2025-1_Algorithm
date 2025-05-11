#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> v;
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	vector<int> temp(n, 1);
	for (int i = 0; i < m; i++) {
		temp[i] = 0;
	}
	do {
		for (int i = 0; i < n; i++) {
			if (temp[i] == 0)
				cout << v[i] << " ";
		}
		cout << "\n";
	} while (next_permutation(temp.begin(), temp.end()));
}
