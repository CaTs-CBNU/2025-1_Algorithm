#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}