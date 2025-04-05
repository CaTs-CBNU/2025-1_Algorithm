#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	int ind = 0;
	int arr[100];
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		arr[ind++] = a + b;
	}

	for (int i = 0;i < ind;i++) {
		cout << arr[i] << "\n";
	}
	
	
}
