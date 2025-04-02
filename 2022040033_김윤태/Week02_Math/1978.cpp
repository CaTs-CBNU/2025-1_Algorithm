#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, num;
	int count = 0;
	int Scount = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		for (int j = 1; j <= num; j++) {
			if (num % j == 0)
				count++;
		}
		if (count == 2)
			Scount++;
		count = 0;
	}
	cout << Scount;
}