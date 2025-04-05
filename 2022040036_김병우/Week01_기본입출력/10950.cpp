#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	int n;
	int arr[100];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (int i = 0;i < n;i++) {
		cout << arr[i] << "\n";
	}
	
	
}
