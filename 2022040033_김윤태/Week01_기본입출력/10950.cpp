#include <iostream>
#include <string>

using namespace std;;

int main() {
	int a, b, c, T;
	int arr[1000];
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		c = a + b;
		arr[i] = c;
	}
	for (int i = 0; i < T; i++) {
		cout << arr[i] << "\n";
	}
}