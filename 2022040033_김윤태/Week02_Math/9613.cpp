#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int GCD(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		if (r == 0) {
			return b;
		}
		a = b;
		b = r;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	int N[100];
	long long sum;
	long long sumGCD[100];
	cin >> t;
	for (int i = 0; i < t; i++) {
		sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> N[j];
		}
		for (int p = 0; p < n; p++) {
			for (int k = p + 1; k < n; k++) {
				sum = sum + GCD(N[p], N[k]);
			}
		}
		sumGCD[i] = sum;
	}
	for (int i = 0; i < t; i++) {
		cout << sumGCD[i] << "\n";
	}
}