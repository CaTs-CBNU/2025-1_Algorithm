#include <iostream>
#include <string>

using namespace std;;

int main() {
	int T, a, b, c;
	int arr[1000];
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		c = a + b;
		arr[i] = c;
	}
	for (int j = 0; j < T; j++) {
		cout << "Case #" << j + 1 << ": " << arr[j] << "\n";
	}
}