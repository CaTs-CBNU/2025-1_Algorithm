#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int GCD(long a, long b) {
	long r;
	while (true) {
		r = a % b;
		if (r == 0)
			return b;
		a = b;
		b = r;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long A, B;
	long LCM;
	cin >> A >> B;
	cout << A * B / GCD(A, B);
}