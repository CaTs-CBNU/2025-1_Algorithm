#include <iostream>
#include <string>

using namespace std;;

int main() {
	int a = 1, b = 1, c;
	int i = 0;
	int arr[100];
	while (a != 0 && b != 0) {
		cin >> a >> b;
		c = a + b;
		arr[i] = c;
		i++;
	}
	for (int j = 0; j < i - 1; j++) {
		cout << arr[j] << "\n";
	}
}