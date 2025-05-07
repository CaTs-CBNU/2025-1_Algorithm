#include<iostream>
using namespace std;

int main(void) {

	int N, K;

	cin >> N >> K;

	int* arr = new int[N + 1];
	for (int i = 2;i < N + 1;i++) {
		arr[i] = i;
	}

	int cnt = 0;
	while (1) {
		int prime = 2;
		for (int i = 2;i < N + 1;i++) {
			if (arr[i] != 0) {
				prime = arr[i];
				break;
			}
		}
		for (int i = 2;i < N + 1;i++) {
			if (arr[i] != 0 && arr[i] % prime == 0) {
				//cout << arr[i] << endl;
				cnt++;
				if (cnt == K) {
					cout << arr[i];
					return 0;
				}

				arr[i] = 0;

			}
		}
	}




}