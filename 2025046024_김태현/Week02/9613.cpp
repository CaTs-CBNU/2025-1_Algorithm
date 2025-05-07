#include<iostream>
#include<vector>
using namespace std;

int main(void) {


	int T;
	cin >> T;
	for (int i = 0;i < T;i++) {
		vector<long> v = vector<long>();
		int N;
		cin >> N;
		for (int i = 0;i < N;i++) {
			long input;
			cin >> input;
			v.push_back(input);
		}
		long sum = 0;
		for (int i = 0;i < N - 1;i++) {
			for (int j = i + 1;j < N;j++) {
				long a = v[i];
				long b = v[j];
				while (a % b != 0) {
					long temp = a % b;
					a = b;
					b = temp;
				}
				sum += b;
			}
		}

		cout << sum << endl;
	}


}