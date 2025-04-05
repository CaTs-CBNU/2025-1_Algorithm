#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	int t;
	char ch;
	int arr[100];
	

	cin >> t;
	for (int i = 0;i < t;i++) {
		cin >> a >> ch >> b;
		arr[i] = a + b;
	}

	for (int i = 0;i < t;i++) {
		cout << arr[i] << "\n";
	}
	
	
}
