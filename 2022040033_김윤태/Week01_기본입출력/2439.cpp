#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}