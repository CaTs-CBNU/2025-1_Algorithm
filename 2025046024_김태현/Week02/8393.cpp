#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;

	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}