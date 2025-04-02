#include <iostream>
using namespace std;

int main() {
	int *num;
	int n;
	int count;
	cin >> n;
	num = new int[n];
	count = n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		for (int j = 2; j < (num[i] / 2)+1; j++) {
			if (num[i] % j == 0) {
				count--;
                break;
			}
		}
		if (num[i] == 1) {
			count--;
		}
	}
	cout << count;
	delete[]num;
}