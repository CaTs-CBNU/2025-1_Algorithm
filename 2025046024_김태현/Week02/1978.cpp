#include<iostream>
using namespace std;
int main(void) {

	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0;i < N;i++) {
		int input;
		cin >> input;

		bool isPrime = true;
		if (input < 2)
			isPrime = false;
		for (int j = 2;j < input;j++) {
			if (input % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cnt++;
		}
	}

	cout << cnt;





}