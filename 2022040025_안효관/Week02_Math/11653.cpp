#include <iostream>
using namespace std;

int main() {
	int num;
	int n[10000];
	int count=0;
	cin >> num;
	int i = 2;
	while (1) {
		if (num == 1) {
			break;
		}
		if (num % i == 0) {
			num = num / i;
			n[count] = i;
			count++;
		}
		else {
			i++;
		}
    }
	for (int j = 0; j < count; j++) {
		cout << n[j] << "\n";
	}
}