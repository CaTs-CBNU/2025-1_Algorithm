#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		if (i != N - 1) {
			cout << "\n";
		}
	}
}
