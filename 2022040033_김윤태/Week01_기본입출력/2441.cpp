#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = i; k < N; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}