#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			cout << i << "\n";
			N = N / i;
		}
	}
}