#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	int min, max;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (i == 0) {
			min = max = input;
		}
		else {
			if (input > max)
				max = input;
			if (input < min)
				min = input;
		}


	}

	cout << min << " " << max;

	return 0;
}