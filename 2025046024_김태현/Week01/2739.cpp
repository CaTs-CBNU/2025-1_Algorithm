#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;
	for (int i = 1; i <= 9; i++) {
		cout << N << " * " << i << " = " << N * i << endl;
	}
	return 0;
}